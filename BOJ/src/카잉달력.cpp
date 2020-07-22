//카잉달력 ~ 6064 @ 백준

#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
    int cases, time;
    cin >> cases;
    for(time=0;time<cases;time++){
        int M, N, x, y;
        int i, j;
        int m_year;
        cin >> M >> N >> x >> y;
        i = x;
        m_year = lcm(M, N);
        while(i<=m_year){
            j = i % N;
            if(j == 0) j = N;
            if(j == y) break;
            i = i + M;
        }
        if(i>m_year){
            cout << -1 << endl;
        }else{
            cout << i << endl;
        }
    }
}

int gcd(int a, int b){
    int r = 0;
    while(b!=0){
        r = a % b;
        a = b;
        b = r ;
    }
    return a;
}

int lcm(int a, int b){
    return (a * b) / gcd(a,b);
}
