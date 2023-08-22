//슈퍼마리오 ~ 2851 @ 백준

#include <iostream>
//using namespace std;

#define LENGTH 10

int main(){
    int input[10];

    for(int i = 0; i < LENGTH; ++i){
        std::cin >> input[i];
    }

    int min_diff = LENGTH * 1000 + 1;
    int ans;
    for(int j = 0; j < LENGTH; ++j){
        int partial_sum = 0;
        for(int k = 0; k <= j; ++k){
            partial_sum += input[k];
        }
        int sum_diff =  100 - partial_sum;
        sum_diff = sum_diff < 0 ? -sum_diff : sum_diff;
        if(sum_diff < min_diff){
            min_diff = sum_diff;
            ans = partial_sum;
        }else if(sum_diff == min_diff){
            ans = ans > partial_sum ? ans : partial_sum; 
        }
    }

    std::cout << ans << std::endl;
}