//미로 탐색 ~ 2178 @ 백준

//pair 쓸 생각을 못했네^^

#include <iostream>
#include <queue>

//using namespace std;

class Point{
    public:
        int x;
        int y;
    Point(int iy, int ix){
        x = ix;
        y = iy;
    }
};

char map[100][100];
int visited[100][100];
std::queue<Point> queue;
int height, width;

void enqueue(int currX, int currY){
    if(!currX == 0){
        if(map[currY][currX-1] == '1' && visited[currY][currX-1] == 0){
            queue.push(Point(currY, currX-1));
            visited[currY][currX-1] = visited[currY][currX]+1;
        }
    }
    if(!currY == 0){
        if(map[currY-1][currX] == '1' && visited[currY-1][currX] == 0){
            queue.push(Point(currY-1, currX));
            visited[currY-1][currX] = visited[currY][currX]+1;
        }
    }
    if(currX != (width-1)){
        if(map[currY][currX+1] == '1' && visited[currY][currX+1] == 0){
            queue.push(Point(currY, currX+1));
            visited[currY][currX+1] = visited[currY][currX]+1;
        }
    }
    if(currY != (height-1)){
        if(map[currY+1][currX] == '1' && visited[currY+1][currX] == 0){
            queue.push(Point(currY+1, currX));
            visited[currY+1][currX] = visited[currY][currX]+1;
        }
    }
}



int main(){

    std::cin >> height >> width;
    for(int i = 0; i < height; ++i){
        std::cin >> map[i];
    }

    int currX = 0;
    int currY = 0;

    int targetX = width - 1;
    int targetY = height - 1;

    // for(int i = 0; i < height; ++i){
    //     for(int j = 0; j < width; ++j){
    //         std::cout << map[i][j];
    //     }
    //     std::cout << std::endl;
    // }
    
    int step = 1;

    queue.push(Point(0,0));
    visited[0][0] = 1;

    while(currX != targetX || currY != targetY){
        Point currPoint = queue.front();
        queue.pop();
        currX = currPoint.x;
        currY = currPoint.y;
        // std::cout << step++ << ": " << currX << ' ' << currY << std::endl;
        enqueue(currX, currY);
    }

    std::cout << visited[targetY][targetX] << std::endl;


}