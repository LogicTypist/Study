#include <iostream>
#include <cmath>
#include <string.h>

//using namespace std;

class Photon_Cannon{
    int hp, shield;
    int coord_x, coord_y;
    int damage;

    char* name;

    public:
    Photon_Cannon(int x, int y);
    Photon_Cannon(int x, int y, const char *cannon_name);
    Photon_Cannon(const Photon_Cannon &pc);
    ~Photon_Cannon();

    void show_status();
};

 Photon_Cannon::Photon_Cannon(int x, int y){
    hp = 100;
    shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
    name = NULL;
 }
 Photon_Cannon::Photon_Cannon(int x, int y, const char *cannon_name){
    hp = 100;
    shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
    name = new char[strlen(cannon_name) + 1];
    strcpy(name, cannon_name);
 }
Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc){
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;
    name = new char[strlen(pc.name) + 1];
    strcpy(name, pc.name);
}
Photon_Cannon::~Photon_Cannon(){
    if (name) delete[] name;
}
void Photon_Cannon::show_status(){
    std::cout << "Photon_Cannon" << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "HP : " << hp << std::endl;
    std::cout << "shield : " << shield << std::endl;
    std::cout << "damage" << std::endl;
}

int main(){
    
}
