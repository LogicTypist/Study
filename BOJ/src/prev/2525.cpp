//오븐 시계 ~ 2525 @ 백준

#include <iostream>

//using namespace std;

int main(){
    int hour, minute;
    int take_time;

    std::cin >> hour >> minute >> take_time;

    int take_hour = take_time / 60;
    int take_minute = take_time % 60;

    hour += take_hour;
    minute += take_minute;


    hour += minute / 60;
    minute %= 60;
    hour %= 24; 

    std::cout << hour << ' ' << minute;
}