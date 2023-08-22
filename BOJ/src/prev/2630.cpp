//색종이 만들기 ~ 2630 @ 백준

#include <iostream>

//using namespace std;

int blue;
int white;
int paper[128][128];

void cut(int paperSize, int x, int y){
    bool isFull = true;
    int firstColor = paper[y][x];
    for(int i = y; i < y + paperSize; ++i){
        for(int j = x; j < x + paperSize; ++j){
            if(firstColor != paper[i][j]){
                isFull = false;
                goto done;
            }
        }
    }
    
    done:
    if(isFull){
        if(firstColor == 0) white++;
        else blue++;
        return;
    }

    int nextSize = paperSize / 2;
    cut(nextSize, x, y);
    cut(nextSize, x + nextSize, y);
    cut(nextSize, x, y + nextSize);
    cut(nextSize, x + nextSize, y + nextSize);
}

int main(){
    int paperSize;
    std::cin >> paperSize;
    blue = 0;
    white = 0;


    for(int i = 0; i < paperSize; ++i){
        for(int j = 0; j < paperSize; ++j){
            std::cin >> paper[i][j];
        }
    }
    cut(paperSize, 0, 0);
    std::cout << white << std::endl << blue << std::endl;

}