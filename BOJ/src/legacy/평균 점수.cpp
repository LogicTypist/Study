//평균 점수 ~ 10039 @ 백준
#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int sum_score = 0;
    int t;

    for(t=0;t<5;t++){
        cin >> arr[t];
    }

    for(t=0;t<5;t++){
        if(arr[t] < 40){
            sum_score += 40;
        }else{
            sum_score += arr[t];
        }
    }

    cout << sum_score / 5;

    return 0;
}
