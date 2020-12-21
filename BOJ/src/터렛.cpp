//별찍기 - 10 ~ 2447 @ 백준

#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int Point(ll x1, ll y1, ll r1, ll x2, ll y2, ll r2);

int main(){
    int test_cases;
    int step;
    cin >> test_cases;

    for(step=0;step<test_cases;step++){
        
        ll x1, y1, r1, x2, y2, r2;
        
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        cout << Point(x1, y1, r1, x2, y2, r2) << endl;

    }
    return 0;
}

int Point(ll x1, ll y1, ll r1, ll x2, ll y2, ll r2){
    ll distance;
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    ll add = r1 + r2;
    add = add * add;
    ll sub = r1 - r2;
    sub = sub * sub;

    distance = (dx*dx) + (dy*dy);

    if((distance == add) || ((distance == sub) && (distance != 0))){
        return 1;
    }else if(distance > add){
        return 0;
    }else if((sub < distance) && (add > distance)){
        return 2;
    }else if(distance == 0){
        if(r1 == r2){
            return -1;
        }else{
            return 0;
        }
    }
}