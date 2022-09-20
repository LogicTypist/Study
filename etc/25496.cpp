//장신구 명장 임스 ~ 25496 @ 백준

#include <iostream>
#include <vector>
#include <algorithm>


//using namespace std;

int main(){

    int tired_point;
    int kind_of_equip;
    std::vector<int> making_cost;

    std::cin >> tired_point >> kind_of_equip;
    for(int i = 0; i < kind_of_equip; ++i){
        int input;
        std::cin >> input;
        making_cost.push_back(input);
    }

    std::sort(making_cost.begin(), making_cost.end());

    int num_of_equip = 0;
    for(int i = 0; i < kind_of_equip; ++i){
        if(tired_point >= 200){
            break;
        }
        tired_point += making_cost[i];
        ++num_of_equip;
    }

    std::cout << num_of_equip;




}