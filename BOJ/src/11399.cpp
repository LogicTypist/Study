//ATM ~ 11399 @ 백준

#include <iostream>
#include <vector>
#include <algorithm>

//using namespace std;

int main(){
    int peoples;
    std::vector<int> time;

    std::cin >> peoples;

    for(int i = 0; i < peoples; ++i){
        int input;
        std::cin >> input;
        time.push_back(input);
    }

    std::sort(time.begin(), time.end());

    std::vector<int>::iterator it = time.begin();

    int total_time = 0;
    int current_elapsed_time = 0;
    while(it != time.end()){
        current_elapsed_time += *it;
        total_time += current_elapsed_time;
        ++it;
    }

    std::cout << total_time;

}