//하노이 탑 이동 순서 ~ 11729 @ 백준

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

class Marine{
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;
    char* name;

    public:
    Marine();               //기본 생성자
    Marine(int x, int y);   //x, y에 마린 생성
    Marine(int x, int y, const char* marine_name);
    ~Marine();

    int attack();                      //데미지 리턴
    void be_attacked(int damage_earn);  //입는 데미지
    void move(int x, int y);            //새로운 위치
    
    void show_status();                 //상태 표시
};

Marine::Marine(){
    hp = 50;
    damage = 5;
    coord_x = coord_y = 0;
    is_dead = false;
}
Marine::Marine(int x, int y){
    hp = 50;
    damage = 5;
    coord_x = x;
    coord_y = y;
    is_dead = false;
}
Marine::Marine(int x, int y, const char* marine_name){
    hp = 50;
    damage = 5;
    coord_x = x;
    coord_y = y;
    is_dead = false;
    name = new char[strlen(marine_name)+1];
    strcpy(name, marine_name);
}
Marine::~Marine(){
    cout << name << "의 소멸자 호츨!" << endl; 
    if(name!=NULL){
        delete[] name;
    }
}

int Marine::attack(){
    return damage;
}

void Marine::be_attacked(int damage_earn){
    hp -= damage_earn;
    if(hp <= 0) is_dead = true;
}
void Marine::move(int x, int y){
    coord_x = x;
    coord_y = y;
}

void Marine::show_status(){
    cout << "*** Marine : " << name << " ***" << endl << "위치 : (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP : " << hp << endl;
}


class Test{
    char c;

    public:
    Test(char _c){
        c = _c;
        cout << "생성자 호출 : " << c << endl;
    }
    ~Test(){
        cout << "소멸자 호출 : " << c << endl;
        }

    
};

void simple_function(){
        Test b('b');
    }


int main(){
    
    /*
    Marine* marines[100];

    marines[0] = new Marine(1,1, "Marine 1");
    marines[1] = new Marine(3,5, "Marine 2");
    
    marines[0] -> show_status();
    marines[1] -> show_status();

    cout << endl << "마린 1 이 마린 2 를 공격! " << endl;
    marines[0]->be_attacked(marines[1]->attack());

    marines[0]->show_status();
    marines[1]->show_status();

    delete marines[0];
    delete marines[1];
    */
    Test a('a');
    simple_function();
}
