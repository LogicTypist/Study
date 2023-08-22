//분해합 ~ 2231 @ 백준

#include <iostream>

//using namespace std;

int main(){

    int target;
    int current = 1;

    std::cin >> target;

    while(current <= target){
        int current_copy = current;
        int generated = current;
        while(current_copy != 0){
            int digit = current_copy % 10;
            current_copy /= 10;
            generated += digit;
        }
        if(generated == target){
            std::cout << current << std::endl;
            return 0;
        }
        ++current;
    }
    std::cout << 0;
}