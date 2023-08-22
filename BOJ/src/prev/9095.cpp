//1, 2, 3 더하기 ~ 9095 @ 백준

#include <iostream>

//using namespace std;

int main(){
    int arr[12];
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    
    for(int i = 4; i < 12; ++i){
        arr[i] = arr[i-3] + arr[i-2] + arr[i-1]; 
    }

    int cases;

    std::cin >> cases;
    for(int i = 0; i < cases; ++i){
        int number;
        std::cin >> number;
        std::cout << arr[number] << std::endl;
    }
    
}