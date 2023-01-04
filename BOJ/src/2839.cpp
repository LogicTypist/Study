//설탕배달 ~ 2839 @ 백준


#include <iostream>


int memo[5001] = {};


int sugar(int n);

void solve(){
    int n;
    std::cin >> n;
    std::cout << sugar(n);
}

int sugar(int n){
    if(n < 0){
        return -1;
    }else if(n == 0){
        return 0;
    }else{
        if(memo[n] != 0){
            return memo[n];
        }else{
            int sub5 = sugar(n - 5);
            int sub3 = sugar(n - 3);
            if(sub5 >= 0 && sub3 >= 0){
                memo[n] = sub5 < sub3 ? sub5 : sub3;
                memo[n]++;
            }else if(sub5 >= 0){
                memo[n] = sub5 + 1;
            }else if(sub3 >= 0){
                memo[n] = sub3 + 1;
            }else{
                memo[n] = -1;
            }
            
            return memo[n];
        }
    }
}


int main(){
    solve();
}
