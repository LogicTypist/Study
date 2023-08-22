//단지번호붙이기 ~ 2667 @ 백준

#include <iostream>
//using namespace std;
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

int size;
char map[25][25] = {};
bool visited[25][25] = {};

std::vector<int> numOfUnit;

int getNum(int i, int j);
void putTarget(int i, int j, std::queue<std::pair<int, int>>& qu);

void solve(){
    std::cin >> size;
    for(int i = 0; i < size; ++i){
        std::cin >> map[i];
    }

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            int num = getNum(i, j);
            if(num != 0){
                numOfUnit.push_back(num);
            }
        }
    }
    std::cout << numOfUnit.size() << std::endl;

    std::sort(numOfUnit.begin(), numOfUnit.end());

    for(int i = 0; i < numOfUnit.size(); ++i){
        std::cout << numOfUnit.at(i) << std::endl;
    }
}

int getNum(int i, int j){
    if(visited[i][j] || map[i][j] == '0'){
        return 0;
    }
    std::queue<std::pair<int, int>> qu;
    std::pair<int, int> start(i, j);
    qu.push(start);
    visited[i][j] = true;
    int total = 0;
    while(!qu.empty()){
        std::pair<int, int> current = qu.front();
        qu.pop();
        putTarget(current.first, current.second, qu);
        total++;
    }
    return total;
}

void putTarget(int i, int j, std::queue<std::pair<int, int>>& qu){
    if(i > 0 && map[i-1][j] == '1' && !visited[i-1][j]){
        std::pair<int, int> p(i-1, j);
        visited[i-1][j] = true;
        qu.push(p);
    }
    if(i < size - 1 && map[i+1][j] == '1' && !visited[i+1][j]){
        std::pair<int, int> p(i+1, j);
        visited[i+1][j] = true;
        qu.push(p);
    }
    if(j > 0 && map[i][j-1] == '1' && !visited[i][j-1]){
        std::pair<int, int> p(i, j - 1);
        visited[i][j-1] = true;
        qu.push(p);
    }
    if(j < size - 1 && map[i][j+1] == '1' && !visited[i][j+1]){
        std::pair<int, int> p(i, j + 1);
        visited[i][j+1] = true;
        qu.push(p);
    }
}


int main(){
    solve();
}