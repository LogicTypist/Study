//최대공약수와 최소공배수 ~ 2609 @ 백준

#include <iostream>
//using namespace std;

int gcd(int a, int b){
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }

    if(b == 0){
        return a;
    }

    return gcd(a % b, b);
}

int lcm(int a, int b){
    int gcd_value = gcd(a, b);
    return (a / gcd_value) * (b / gcd_value) * gcd_value;
}


int main(){
    int a;
    int b;

    std::cin >> a >> b;

    std::cout << gcd(a, b) << std::endl << lcm(a,b);
}