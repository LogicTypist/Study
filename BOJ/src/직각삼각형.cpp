//직각삼각형 ~ 4153 @ 백준
#include <iostream>

using namespace std;
bool Is_Rectangle(int a, int b, int c);

int main(){
    int a,b,c;
    while(1){
        a=0;
        b=0;
        c=0;
        cin >> a >> b >> c;
        if((a==0) && (b==0) && (c==0)) break;
        if(Is_Rectangle(a,b,c)){
            cout << "right" << "\n";
        }else{
            cout << "wrong" << "\n";
        }
    }
    return 0;
}

bool Is_Rectangle(int a, int b, int c){
    if((a*a+b*b) == (c*c)||(a*a+c*c) == (b*b)||(c*c+b*b) == (a*a)){
        return true;
    }else{
        return false;
    }
}