//수 정렬하기 ~ 10989 @ 백준

//카운 정렬을 이

#include <iostream>



void solve(){
    int numOfNumbers;
    int count[10001] = {};
    std::cin >> numOfNumbers;
    for(int i = 0; i < numOfNumbers; ++i){
        int temp;
        std::cin >> temp;
        count[temp]++;
    }
    for(int i = 0; i < 10001; ++i){
        for(int j = 0; j < count[i]; ++j){
            std::cout << i << "\n";
        }
    }
}



int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
}