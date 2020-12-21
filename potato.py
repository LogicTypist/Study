from functools import reduce

l = reduce(lambda x,y: x+y, range(0,5))

print(l)