//1로 만들기 ~ 1463 @ 백준

#include <iostream>
using namespace std;


int main(){
    int target;
    int step;
    int arr[1000001]={};                                //배열의 값은 인덱스값을 1로 만들기까지의 단계수입니다.

    arr[1] = 0;

    cin >> target;

    for(step=2;step<=target;step++){                    //타겟까지의 테이블을 채웁니다.
        arr[step] = arr[step-1] + 1;                    //1을 뺐을 때의 단계수
        if((step%2)==0){
            arr[step] = min(arr[step], arr[step/2]+1);  //단계수의 최소를 배열의 값에 저장 합니다.
        }
        if((step%3)==0){
            arr[step] = min(arr[step], arr[step/3]+1);  //단계수의 최소를 배열의 값에 저장 합니다.
        }
    }

    cout << arr[target] << endl;
    return 0;
}