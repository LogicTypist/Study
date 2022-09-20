//비숍 투어 ~ 23885 @ 백준

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>


//using namespace std;

bool isBlack(std::pair<int, int> target);

int main(){
    
    int N, M;

    std::pair<int, int> start;
    std::pair<int, int> end;

    std::cin >> N >> M;
    std::cin >> start.first >> start.second;
    std::cin >> end.first >> end.second;

    if(((N == 1) || (M == 1))){
        if(start.first == end.first && start.second == end.second){
            std::cout << "YES";
        }else{
            std::cout << "NO";
        }
        
    }else{
        if(isBlack(start) == isBlack(end)){
            std::cout << "YES";
        }else{
            std::cout << "NO";
        }
    }

    
    

}

bool isBlack(std::pair<int, int> target){

    bool oddX = (target.first % 2) != 0;
    bool oddY = (target.second % 2) != 0;

    if((oddX && oddY) || (!oddX && !oddY)){
        return true;
    }else{
        return false;
    }
    
}