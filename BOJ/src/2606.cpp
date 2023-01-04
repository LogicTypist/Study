//바이러스 ~ 2606 @ 백준

#include <iostream>
//using namespace std;
#include <queue>



void solve(){
    bool graphMap[101][101] = {false};

    int numOfComputer;
    int numOfEdge;
    std::cin >> numOfComputer >> numOfEdge;
    for(int i = 0; i < numOfEdge; ++i){
        int first, second;
        std::cin >> first >> second;
        graphMap[first][second] = true;
        graphMap[second][first] = true;
    }
    bool visited[101];
    std::queue<int> st;
    visited[1] = true;
    st.push(1);
    int total = 0;
    while(!st.empty()){
        int current = st.front();
        st.pop();
        for(int i = 1; i <= numOfComputer; ++i){
            if(!visited[i] && graphMap[current][i]){
                visited[i] = true;
                st.push(i);
            }
        }
        total++;
    }
    std::cout << total - 1;
}


int main(){
    solve();
}