//2xn 타일링 ~ 11726 @ 백준


#include <iostream>


int memo[1001] = {};

void compute(){
    
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 3;
    for(int i = 4; i < 1001; ++i){
        memo[i] = memo[i-2] + memo[i-1];
    }
}

int main(){
    compute();
    int target;
    std::cin >> target;
    std::cout << memo[target] << std::endl;
}