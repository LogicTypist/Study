//소인수분해 ~ 11653 @ 백준

#include <iostream>


int main(){
  int input;
  int curr_working = 2;

  std::cin >> input;
  
  while(input != 1){
    if(input % curr_working == 0){
      input = input / curr_working;
      std::cout << curr_working << std::endl;
    }else{
      curr_working++;
    }
  }

  return 0;
} 