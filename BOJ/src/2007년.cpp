//2007년 ~ 1924 @ 백준

#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int month, day;
    int days_data[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string yoil[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int n;
    int total_days = 0;

    cin >> month >> day;
    
    total_days = day - 1;

    for(n=0;n<month;n++){
        total_days += days_data[n];
    }

    cout << yoil[total_days%7];

}
