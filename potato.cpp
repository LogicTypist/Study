//분해합 ~ 2231 @ 백준

#include <iostream>
#include <set>

//using namespace std;

int main(){

    int cases;
    std::cin >> cases;
    for(int i = 0; i < cases; ++i){
        int num_students;
        int students[300] = {};

        std::cin >> num_students;
        for(int i = 0; i < num_students; ++i){
            std::cin >> students[i];
        }

        int current = num_students;
        while(true){
            std::set<int> mod;

            for(int i = 0; i < num_students; ++i){
                int curr_mod = students[i] % current;
                if(mod.count(curr_mod) == 0){
                    mod.insert(curr_mod);
                }else{
                    goto 
                }
            }

        }
    }
    
}