//DFS와 BFS ~ 1260 @ 백준

//이거 왜 되는지 생각해봐야함.
//graph 배열의 행 크기를 1009로 하면 되고 1001로하면 안됨.

#include <iostream>
#include <queue>
#include <algorithm>

//using namespace std;

void DFS(bool graph[][1001], bool visited[], int target, int numVertex){
  visited[target] = true;
  
  std::cout << target << ' ';
  for(int i = 1; i <= numVertex; ++i){
    if(!visited[i] && graph[target][i]){
      DFS(graph, visited, i, numVertex);
    }
  }

}

void BFS(bool graph[][1001], bool visited[], int start, int numVertex){
  std::queue<int> toVisit;
  visited[start] = true;
  toVisit.push(start);

  while(!toVisit.empty()){
    int current = toVisit.front();
    toVisit.pop();
    visited[current] = true;
    std::cout << current << ' ';
    for(int i = 1; i <= numVertex; ++i){
      if(!visited[i] && graph[current][i]){
        visited[i] = true;
        toVisit.push(i);
      }
    }
  }
}

int main(){
  bool graph[1009][1001];  //인접행렬
  bool DFSvisited[1001] = {false};
  bool BFSvisited[1001] = {false};
  int vertex, edge, start;
  

  std::cin >> vertex >> edge >> start;
  for (int i = 0; i < edge; ++i){
    int first, second;
    std::cin >> first >> second;
    graph[first][second] = true;
    graph[second][first] = true;
  }
  DFS(graph, DFSvisited, start, vertex);
  std::cout << std::endl;
  BFS(graph, BFSvisited, start, vertex);
  
}

