//검증수 ~ 2475 @ 백준

#include <iostream>
#include <string>

//using namespace std;

int main(){
  int input;
  int sum_of_pow = 0;

  for(int i = 0; i < 5; i++){
    std::cin >> input;
    sum_of_pow += input * input;
  }
  std::cout << sum_of_pow % 10 << std::endl;
  return 0;
}