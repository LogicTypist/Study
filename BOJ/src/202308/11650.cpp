// 좌표 정렬하기 ~ 11650 @ 백준


#include <iostream>
#include <algorithm>
#include <vector>

struct Point{
    int x;
    int y;
};

bool compare(Point b, Point a){
    if (a.x > b.x) {
        return true;
    }else if(a.x < b.x){
        return false;
    }else{
        if (a.y > b.y) {
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    
    std::vector<Point> v = std::vector<Point>();

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int tempA, tempB;
        std::cin >> tempA >> tempB;
        v.push_back(Point{tempA, tempB});
    }

    std::sort(v.begin(), v.end(), compare);

    for (Point i:v) {
        std::cout << i.x << " " << i.y << "\n";
    }
}

//20230821
//이런 실수를 하다니 믿을 수 없다.
//std::endl이 시간을 많이 잡아먹는 것을 생각하지 않고 시간초과의 이유를 찾고있었다.;;