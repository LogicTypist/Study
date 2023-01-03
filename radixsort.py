from queue import Queue

def radix_sort(A):
  maxlength = 0             #주어진 파일의 문자열중 가장 긴 문자열의 길이
  for i in A:
    if(len(i) > maxlength):
      maxlength = len(i)

  queues = []
  for i in range(128):      #영문 문자열이므로 아스키코드의 크기만큼 버킷 생성
    queues.append(Queue())

  n = len(A)
  for pos in range(maxlength-1, -1, -1):  #주어진 문자열중 가장 긴 문자열의 마지막 위치부터 처음 위치까지 반복
    for i in range(n):
      b = 0                   #짧은 단어일 경우 앞에 와야하므로 0번째 버킷에 저장
      if len(A[i]) > pos :
        b = ord(A[i][pos])
      queues[b].put(A[i])
    
    j = 0
    for b in range(128):
      while not queues[b].empty():
        A[j] = queues[b].get()
        j += 1

infile = open("test.txt", "r")
words = infile.read().split()
infile.close()



print(words)

radix_sort(words)

print(words)

