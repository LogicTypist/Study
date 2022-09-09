//엘프의 검 ~ 4436 @ 백준

#include <iostream>

//using namespace std;

int main(){

    long long n;

    while(std::cin >> n){

        bool done = false;
        bool numbers[10] = {};

        int k = 1;

        while(!done){
            long long current = n * k;

            while(current != 0){
                int exist_num = current % 10;
                current /= 10;
                numbers[exist_num] = true;
            }

            ++k;

            done = true;
            for(int i = 0; i < 10; ++i){
                if(!numbers[i]){
                    done = false;
                    break;
                }
            }
        }
        std::cout << k - 1 << std::endl;
    }

}