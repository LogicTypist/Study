//늑대와 양 ~ 16956 @ 백준

#include <iostream>


//using namespace std;

bool isNearWolf(int i, int j, char map[][500], int R, int C);

int main(){
    
    int R, C;

    char map[500][500];

    std::cin >> R >> C;

    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            std::cin >> map[i][j];
        }
    }

    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            if(map[i][j] == 'S'){
                if(isNearWolf(i, j, map, R, C)){
                    goto impossible;
                }
            }
        }
    }

    std::cout << 1 << std::endl;
    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            if(map[i][j] == '.'){
                std::cout << 'D';
            }else{
                std::cout << map[i][j];
            }
        }
        std::cout << std::endl;
    }

    return 0;



    impossible:
        std::cout << 0;


}




bool isNearWolf(int i, int j, char map[][500], int R, int C){

    if(j != 0){
        if(map[i][j-1] == 'W'){
            return true;
        }
    }
    if(i != 0){
        if(map[i-1][j] == 'W'){
            return true;
        }
    }
    if(j != (C - 1)){
        if(map[i][j+1] == 'W'){
            return true;
        }
    }
    if(i != (R - 1)){
        if(map[i+1][j] == 'W'){
            return true;
        }
    }
    return false;
}