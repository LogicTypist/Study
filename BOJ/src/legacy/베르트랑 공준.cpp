//베르트랑 공준 ~ 4948 @ 백준
#include <iostream>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int testcase;
    while(1){
    cin >> testcase;
    if(testcase == 0) break;

    bool arr[1000001];
    int M = testcase;
    int N = 2 * testcase;
    int i, j;
    int result = 0;
    arr[1] = false;

    for(i=2;i<=N;i++){
        arr[i] = true;
    }
    for(i=2;i*i<=N;i++){
        if(arr[i]){
            for(j=i*i;j<=N;j+=i){
                arr[j] = false;
            }
        }
    }

    for(i=M+1;i<=N;i++){
        if(arr[i]){
            result++;
        }
    }
    cout << result << endl;
    }
}