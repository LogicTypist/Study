//하노이 탑 이동 순서 ~ 11729 @ 백준

#include <iostream>
#include <cmath>

//using namespace std;

void hanoi_move(int plates, int from, int to, int other){
  if(plates == 1){
    std::cout << from << ' ' << to << '\n';
    return;
  }
  hanoi_move(plates-1, from, other, to);
  hanoi_move(1, from, to, other);
  hanoi_move(plates-1, other, to, from);
}

int main(){
  int plates;
  int moves = 1;
  std::cin >> plates;
  std::ios_base::sync_with_stdio(false);
  for(int i = 1; i < plates; ++i){
    moves = 2 * moves + 1;
  }
  std::cout << moves << '\n';

  hanoi_move(plates, 1, 3, 2);
}