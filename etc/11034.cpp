//캥거루 세마리2 ~ 11034 @ 백준

#include <iostream>


//using namespace std;

int main(){
    int A, B, C;
    while(std::cin >> A >> B >> C){
        int AtoB, BtoC;
        AtoB = B - A - 1;
        BtoC = C - B - 1;

        if(AtoB > BtoC){
            std::cout << AtoB << std::endl;
        }else{
            std::cout << BtoC << std::endl;
        }

    }
    

    


}