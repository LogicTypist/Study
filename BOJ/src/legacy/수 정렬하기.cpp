//수 정렬하기 ~ 2750 @ 백준
#include <iostream>
#define MAX_VALUE 1001

using namespace std;

int main(){
    int numbers, t, n;
    int temp;
    int min_value, min; //min: 최소값의 위치 min_value: 최소값의 값
    int arr[1000];

    cin >> numbers;

    for(t=0;t<numbers;t++){
        cin >> arr[t];
    }

    for(t=0;t<numbers;t++){
        for(n=t,min_value=MAX_VALUE;n<numbers;n++){
            if(min_value>arr[n]){
                min = n;
                min_value = arr[n];
            }
        }
        temp = arr[t];
        arr[t] = min_value;
        arr[min] = temp;
    }

    for(t=0;t<numbers;t++){
        cout << arr[t] << "\n";
    }
    return 0;
}
