//성 지키기 ~ 1236 @ 백준

#include <iostream>

//using namespace std;

int main(){
  int x, y;
  std::cin >> y >> x;
  char col[51];
  bool is_guard[50] = {false};
  for(int i=0; i<50; i++){
    is_guard[i] = false;
  }


  bool is_guard_in_this_col;
  int guardless_col = 0;
  int guardless_row = 0;

  for(int step=0;step<y;step++){
    std::cin >> col;
    is_guard_in_this_col = false;
    for(int colomn_step=0;colomn_step<x;colomn_step++){
      
      if(col[colomn_step] == 'X'){
        is_guard[colomn_step] = true;
        is_guard_in_this_col = true;
      }
    }
    if(is_guard_in_this_col == false){
      guardless_col++;
    }
  }
  for(int step=0;step<x;step++){
    if(is_guard[step] == false){
      guardless_row++;
    }
  }
  if(guardless_row > guardless_col){
    std::cout << guardless_row << std::endl;
  }else{
    std::cout << guardless_col << std::endl;
  }
  return 0;
}