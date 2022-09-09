//블랙잭 ~ 2798 @ 백준

#include <iostream>

//using namespace std;


int main(){
    int num_cards;
    int max_number;
    int cards[100];

    std::cin >> num_cards >> max_number;
    for(int i = 0; i < num_cards; ++i){
        std::cin >> cards[i];
    }

    int max_all_cases = 0;

    for(int i = 0; i < num_cards - 2; ++i){
        for(int j = i+1; j < num_cards - 1; ++j){
            for(int k = j+1; k < num_cards; ++k){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= max_number && sum > max_all_cases){
                    max_all_cases = sum;
                }
            }
        }
    }

    std::cout << max_all_cases;
}