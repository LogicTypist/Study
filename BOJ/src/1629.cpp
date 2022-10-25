//곱셈 ~ 1629 @ 백준

#include <iostream>
//using namespace std;

long long mult(long a, long long b, long long c){
    if(b == 1){
        return a % c;
    }else if(b % 2 == 0){
        return (mult(a, b / 2, c) * mult(a, b / 2, c)) % c;
    }else{
        return (mult(a, b / 2, c) * mult(a, b / 2 + 1, c)) % c;
    }
    
}


int main(){
    long long a;
    long long b;
    long long c;

    std::cin >> a >> b >> c;

    std::cout << mult(a, b, c);
}