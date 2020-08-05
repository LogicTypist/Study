//그대로 출력하기 ~ 11718 @ 백준

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
