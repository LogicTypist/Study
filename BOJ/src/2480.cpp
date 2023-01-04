//주사위 세개 ~ 2480 @ 백준

#include <iostream>
//using namespace std;


void solve(){
    int a, b, c;
    std::cin >> a >> b >> c;

    if(a == b && b == c){
        std::cout << 10000 + a * 1000;
    }else if(a == b || b == c || a == c){
        if(a == b || a == c){
            std::cout << 1000 + a * 100;
        }else if(b == c)
            std::cout << 1000 + b * 100;
    }else{
        int max;
        if(a > max)
            max = a;
        if(b > max)
            max = b;
        if(c > max)
            max = c;
        std::cout << max * 100;
    }
}


int main(){
    solve();
}