//쿼드트리 ~ 1992 @ 백준

#include <iostream>
#include <string>

//using namespace std;

char img[64][64];
std::string answer = "";

std::string quadTree(int imgSize, int x, int y){
    bool isFull = true;
    char firstColor = img[y][x];
    for(int i = y; i < y + imgSize; ++i){
        for(int j = x; j < x + imgSize; ++j){
            if(firstColor != img[i][j]){
                isFull = false;
                goto done;
            }
        }
    }
    done:
    if(isFull){
        return firstColor == '0' ? "0" : "1";
    }

    
    int nextSize = imgSize / 2;
    return "(" + quadTree(nextSize, x, y)
    + quadTree(nextSize, x + nextSize, y)
    + quadTree(nextSize, x, y + nextSize)
    + quadTree(nextSize, x + nextSize, y + nextSize) + ")";

}

int main(){
    int imgSize;
    std::cin >> imgSize;

    for(int i = 0; i < imgSize; ++i){
        std::cin >> img[i];
    }

    std::cout << quadTree(imgSize, 0, 0) << std::endl;



}