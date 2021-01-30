//그대로 출력하기 2 ~ 11719 @ 백준
//그대로 출력하기 1과 같은 소스인데 동작함.
//다른답 있나

#include <iostream>

using namespace std;

int main(){
    char buff;
    buff = cin.get();
    while(!cin.eof()){
        cout << buff;
        buff = cin.get();
    }
}
