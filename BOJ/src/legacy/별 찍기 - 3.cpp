//별 찍기 - 3 ~ 2440 @ 백준

#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int stars;
    int n, p;
    cin >> stars;

    for(n=stars;n>0;n--){
        for(p=0;p<n;p++){
            cout << '*';
        }
        cout << endl;
    }
}
