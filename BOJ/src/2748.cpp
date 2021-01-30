//피보나치 수 2 ~ 2748 @ 백준

#include <iostream>

long long fibo(int step);

int main(){
  int target;
  std::cin >> target; 
  std::cout << fibo(target) << std::endl;
  return 0;
}

long long fibo(int step){
  long long a = 0;
  long long b = 1;
  long long temp;
  for(int i = 0; i < step; i++){
  temp = a + b;
  a = b;
  b = temp;
  }
  return a;
}