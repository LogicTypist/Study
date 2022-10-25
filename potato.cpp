//Maximum Subarray ~ 10211 @ 백준

#include <iostream>
//using namespace std;

int main(){
    std::ios_base :: sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int test_cases;
    std::cin >> test_cases;
    for(int i = 0; i < test_cases; ++i){
        int number_length;
        int num_array[1000] = {};
        int sum_array[1000] = {};
        std::cin >> number_length;

        int sum = 0;
        for(int j = 0; j < number_length; ++j){
            std::cin >> num_array[j];
            sum += num_array[j];
            sum_array[j] = sum;
        }

        int max = -10000000;
        for(int j = 0; j < number_length; ++j){
            for(int k = j; k < number_length; ++k)
            if(sum_array[k] - sum_array[j] + num_array[j] > max){
                max = sum_array[k] - sum_array[j] + num_array[j];
            }
        }
        
        std::cout << max << "\n";



    }
    
}