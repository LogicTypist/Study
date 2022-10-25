//재귀의 귀재 ~ 25501 @ 백준

#include <iostream>
#include <cstring>
//using namespace std;

int recursion_times;

int recursion(const char *s, int l, int r){
    recursion_times++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int test;
    std::cin >> test;
    for(int i = 0; i < test; ++i){
        char string[1001];
        std::cin >> string;
        recursion_times = 0;
        std::cout << isPalindrome(string) << ' ' << recursion_times << std::endl;
    }
}