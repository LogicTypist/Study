//덩치 ~ 7568 @ 백준

#include <iostream>

int weight[50] = {};
int height[50] = {};


void solve(){
    int numOfMan;
    std::cin >> numOfMan;
    for(int i = 0; i < numOfMan; ++i){
        std::cin >> weight[i] >> height[i];
    }
    for(int i = 0; i < numOfMan; ++i){
        int rank = 1;
        for(int j = 0; j < numOfMan; ++j){
            if(weight[j] > weight[i] && height[j] > height[i]){
                rank++;
            }
        }
        std::cout << rank << std::endl;
    }
}


int main(){
    solve();
}