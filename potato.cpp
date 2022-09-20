//캥거루 세마리2 ~ 11034 @ 백준

#include <iostream>


//using namespace std;


int main(){

    

    int test_cases;

    for(int i = 0; i < test_cases; ++i){
        int length;
        int num_of_ant;
        int pos[100000] = {};

        std::cin >> length >> num_of_ant;
        for(int j = 0; j < num_of_ant; ++j){
            std::cin >> pos[j];
        }


    }

}


int shortest_time(int length, int num_of_ant, int pos[100000]){
    int center = length / 2;

    int min_diff = length;
    int min_diff_pos;

    for(int i = 0; i < num_of_ant; ++i){
        int diff = center - pos[i];
        diff = diff > 0 ? diff : -diff;
        if(diff < min_diff){
            min_diff = diff;
            min_diff_pos = i;
        }
    }




}