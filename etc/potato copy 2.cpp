//Z ~ 1074 @ 백준

#include <iostream>
#include <cmath>
//using namespace std;


int N;
int targetR;
int targetC;
int currNum;
int answer;

void runZ(int size, int x, int y){
    if(size == 1){
        if(targetR == y && targetC == x){
            answer = currNum;
        }
        currNum++;
        return;
    }

    int quater = (size * size) / 4;

    if(N < quater){
        runZ(nextSize, x, y);
    }else if(N < quater * 2){
        runZ(nextSize, x + nextSize, y);
    }else if(N < quater * 3){
        runZ(nextSize, x, y + nextSize);
    }else

    int nextSize = size / 2;
    runZ(nextSize, x, y);
    
    runZ(nextSize, x + nextSize, y + nextSize);

}


int main(){
    std::cin >> N >> targetR >> targetC;
    currNum = 0;
    runZ(pow(2,N), 0, 0);
    std::cout << answer << std::endl;
}