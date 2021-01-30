//막대기 ~ 1094 @ 백준

#include <iostream>
#include <string>

//using namespace std;

int main(){
  int bar;
  int required_bars = 0;

  std::cin >> bar;
  for(int i = 64; i > 0; i = i / 2){
    if(bar >= i){
      bar = bar - i;
      required_bars++;
    }
  }

  std::cout << required_bars << std::endl;
  return 0;
}