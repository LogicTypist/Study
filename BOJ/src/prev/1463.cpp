//1로 만들기 ~ 1463 @ 백준


#include <iostream>
#include <cmath>

int memo[1000001] = {};
bool filled[1000001] = {};


int toOne(int n);

void solve(){
    int n;
    std::cin >> n;
    std::cout << toOne(n);
}

int toOne(int n){
    if(n == 1){
        return 0;
    }else{
        if(filled[n]){
            return memo[n];
        }else{
            int div3 = -1;
            int div2 = -1;
            int sub1 = -1;
            if(n % 3 == 0){
                div3 = toOne(n / 3);
            }
            if(n % 2 == 0){
                div2 = toOne(n / 2);
            }
            if(n - 1 > 0){
                sub1 = toOne(n - 1);
            }
            if(div3 >= 0 && div2 >= 0 && sub1 >= 0){
                int target = std::min(div3, div2);
                target = std::min(target, sub1);
                memo[n] = target + 1;
            }
            else if(div3 >= 0 && div2 >= 0){
                memo[n] = div3 < div2 ? div3 : div2;
                memo[n]++;
            }else if(div2 >= 0 && sub1 >= 0){
                memo[n] = div2 < sub1 ? div2 : sub1;
                memo[n]++;
            }else if(div3 >= 0 && sub1 >= 0){
                memo[n] = div3 < sub1 ? div3 : sub1;
                memo[n]++;
            }else if(div3 >= 0){
                memo[n] = div3 + 1;
            }else if(div2 >= 0){
                memo[n] = div2 + 1;
            }else if(sub1 >= 0){
                memo[n] = sub1 + 1;
            }
            filled[n] = true;
            return memo[n];
        }
    }
}


int main(){
    solve();
}