//별 찍기 - 10 ~ 2447 @ 백준

#include <iostream>
using namespace std;

void Star(int x, int y, int num);

char matrix[2200][2200];

int main(){
    int input;
    cin >> input;

    Star(0,0,input);

    int x,y;

    for(y=0;y<input;y++){
        for(x=0;x<input;x++){
            if(matrix[y][x] == '*'){
                cout << matrix[y][x];
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

void Star(int x, int y, int num){
    if(num == 1){
        matrix[y][x] = '*';
        return;
    }
    int i,j, div;

    div = num / 3;

    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            if((i==1) && (j==1)){
                ;
            }else{
                Star(x+(i*div), y+(j*div), div);
            }
        }
    }

}