//일곱 난쟁이 ~ 2309 @ 백준

#include <iostream>
#include <vector>
#include <algorithm>

//using namespace std;

int main(){
    std::vector<int> height;
    int total_height = 0;

    for(int i = 0; i < 9; ++i){
        int input;
        std::cin >> input;
        height.push_back(input);
        total_height += input;
    }

    int error = total_height - 100;
    
    for(int i = 0; i < 8; ++i){
        for(int j = i+1; j < 9; ++j){
            if(height[i] + height[j] == error){
                height.erase(height.begin() + i);
                height.erase(height.begin() + j - 1);
                goto end;
            }
        }
    }

    end:

    std::sort(height.begin(), height.end());

    for(int i = 0; i < 7; ++i){
        std::cout << height[i] << std::endl;
    }



}