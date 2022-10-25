//GCD 합~ 9613 @ 백준

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

int main(){
    int array[100];

    int testCases;
    std::cin >> testCases;
    for(int t = 0; t < testCases; ++t){
        int numberOfInput;
        std::cin >> numberOfInput;
        for(int i = 0; i < numberOfInput; ++i){
            std::cin >> array[i];
        }

        long long total_gcd = 0;
        for(int i = 0; i < numberOfInput - 1; ++i){
            for(int j = i+1; j < numberOfInput; ++j){
                total_gcd += gcd(array[i], array[j]);
            }
        }
        std::cout << total_gcd << std::endl;

    }
}