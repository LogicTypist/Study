//킹, 퀸, 룩, 비숍, 나이트, 폰 ~ 3003 @ 백준


#include <iostream>


int main(){
    int king, queen, rook, bishop, knight, pawn;
    std::cin >> king >> queen >> rook >> bishop >> knight >> pawn;

    std::cout << 1 - king << " " << 1- queen << " " << 2 - rook << " " << 2 - bishop << " " << 2 - knight  << " " << 8 -pawn;
}

//20230821
//왜 내가 못푼 문제에 갑자기 생겼을까?
//오랜만에 다시 시작을 해보자..