//캥거루 세마리2 ~ 11034 @ 백준

#include <iostream>
#include <vector>
#include <algorithm>


//using namespace std;

int main(){
    
    int num_of_jobs;
    std::vector<int> deadline_of_jobs;

    std::cin >> num_of_jobs;

    for(int i = 0; i < num_of_jobs; ++i){
        int input;
        std::cin >> input;
        deadline_of_jobs.push_back(input);
    }

    std::sort(deadline_of_jobs.begin(), deadline_of_jobs.end());

    int total_elapsed = 0;
    for(int i = 0; i < num_of_jobs; ++i){
        
    }

    


}