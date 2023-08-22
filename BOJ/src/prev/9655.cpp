//돌 게임 ~ 9655 @ 백준

#include <iostream>


//using namespace std;

int main(){
    int stones;
    int memo[1001];
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 1;
    std::cin >> stones;

    for(int i = 4; i <= stones; ++i){
        memo[i] = memo[i-1] < memo[i-3] ? memo[i-1] + 1 : memo[i-3] + 1;
    }

    std::cout << ((memo[stones] % 2 != 0) ? "SK" : "CY") << std::endl;

}


