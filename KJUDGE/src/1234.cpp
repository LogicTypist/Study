//Z ~ 1074 @ 백준

#include <iostream>
//using namespace std;

int main(){



    int n;
    char string[100][101];

    int num_of_char[26] = {0};

    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cin >> string[i];
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; string[i][j] != 0; ++j){
            num_of_char[string[i][j]-'a']++;
        }
    }

    bool isAble = true;
    for(int i = 0; i < 26; ++i){
        if(num_of_char[i] % n != 0){
            isAble = false;
            break;
        }
    }

    std::cout << (isAble ? "true" : "false");
    


}