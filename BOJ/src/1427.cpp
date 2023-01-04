//소트인사이드 ~ 1427 @ 백준


#include <iostream>



void solve(){
    int number;
    int count[10] = {};
    std::cin >> number;
    while(number > 9){
        int temp = number % 10;
        number = number / 10;
        count[temp]++;
    }
    count[number]++;

    for(int i = 9; i >= 0; --i){
        for(int j = 0; j < count[i]; ++j){
            std::cout << i;
        }
    }
    std::cout << std::endl;
}



int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
}