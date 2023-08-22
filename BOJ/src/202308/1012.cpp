// 유기농 배추 ~ 1012 @ 백준


#include <iostream>

int M, N, K;

bool check(int x, int y, bool farm[50][50], bool visited[50][50]){
    if(x<0 || x>=M || y<0 || y>=N)
        return false;
    if(farm[y][x] && !visited[y][x]){
        visited[y][x] = true;
        check(x-1, y, farm, visited);
        check(x+1, y, farm, visited);
        check(x, y-1, farm, visited);
        check(x, y+1, farm, visited);
        return true;
    }else{
        return false;
    }
}


int main(){
    int cases;
    std::cin >> cases;

    for(int c = 0; c < cases; c++){
        bool farm[50][50] = {false};
        bool visited[50][50] = {false};

        std::cin >> M >> N >> K;
    
        int x, y;
        for(int i = 0; i < K; i++){
            std::cin >> x >> y;
            farm[y][x] = true;
        }

        int g = 0; //G렁이가 필요한 수
        for(int i_y = 0; i_y < N; i_y++){
            for(int i_x = 0; i_x < M; i_x++){
                if (check(i_x, i_y, farm, visited))
                    g++;
            }
        }

        std::cout << g << "\n";
    }

}

//20230821
//재귀 함수를 이용해 인접한 배추를 visited 처리하여 배추의 무리를 세었다.
//11번째 줄의 조건문에서 조건을 &&가 아닌 ||으로 적는 실수를 해서 실행이 안되었었다.
//다음부터는 더 꼼꼼히 확인하자