//동전 0 ~ 11047 @ 백준

#include <iostream>

//using namespace std;

int main(){
    int num_coins;
    int coins[10];
    int target;
    int total_coin = 0;

    std::cin >> num_coins >> target;

    for(int i = 0; i < num_coins; ++i){
        std::cin >> coins[i];
    }

    for(int i = num_coins-1; i >= 0; --i){
        total_coin += target / coins[i];
        target %= coins[i]; 
    }

    std::cout << total_coin;
}