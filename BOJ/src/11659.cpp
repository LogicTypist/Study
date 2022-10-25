//구간합 구하기 ~ 11659 @ 백준

#include <iostream>
#include <cmath>
//using namespace std;

int main(){
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int number_length;
    int test_cases;
    int num_array[100000] = {};
    int sum_array[100000] = {};    
    
    std::cin >> number_length >> test_cases;
    int sum = 0;
    for(int i = 0; i < number_length; ++i){
        std::cin >> num_array[i];
        sum += num_array[i];
        sum_array[i] = sum;
    }
    for(int i = 0; i < test_cases; ++i){
        int start;
        int end;
        std::cin >> start >> end;

        std::cout << sum_array[end - 1] - sum_array[start -1] + num_array[start - 1] << "\n"; 
        
    }
    
}