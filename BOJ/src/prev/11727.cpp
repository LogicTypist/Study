//2xn 타일링 ~ 11727 @ 백준

#include <iostream>
#include <cmath>

//using namespace std;

int main(){
    int n;
    int memo[1001];
    std::cin >> n;

    memo[1] = 1;
    memo[2] = 3;

    for(int i = 3; i <= n; ++i){
        memo[i] = (memo[i-1] + 2 * memo[i-2]) % 10007;
    }

    std::cout << memo[n] << std::endl;
}


