//베르트랑 공준 ~ 4948 @ 백준
#include <iostream>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    bool arr[10001];
    int i, j;
    int result = 0;
    arr[1] = false;

    for(i=2;i<=10000;i++){
        arr[i] = true;
    }
    for(i=2;i*i<10000;i++){
        if(arr[i]){
            for(j=i*i;j<=10000;j+=i){
                arr[j] = false;
            }
        }
    }

    int testcase;
    int n = 0;
    cin >> testcase;
    for(n=0;n<testcase;n++){
        int target;
        int x, y;
        cin >> target;
        x = target / 2;
        y = target / 2;

        while(!(arr[x]&&arr[y])){
            x--;
            y++;
        }
        cout << x << ' ' << y << endl;

    }
}