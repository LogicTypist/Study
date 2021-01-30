//열 개씩 끊어 출력하기 ~ 11721 @ 백준
#include <iostream>

using namespace std;

int main(){
    char arr[101];
    int t, n;
    cin >> arr;

    for(t=0; arr[t] != '\0'; t++){
        cout << arr[t];
        if((t!=0) && ((t + 1)%10 == 0)){
            cout << "\n";
        }
    }

    return 0;
}
