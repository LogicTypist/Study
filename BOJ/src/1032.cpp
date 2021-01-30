//명령프롬프트 ~ 1032 @ 백준

#include <iostream>
#include <string>

//using namespace std;

int main(){
  int steps;
  std::cin >> steps;

  std::string base_file_name;
  std::cin >> base_file_name;

  for(int current_step=1;current_step<steps;current_step++){
    std::string compare_file_name;
    std::cin >> compare_file_name;

    for(int compare_step=0;compare_step<base_file_name.length();compare_step++){
      if(base_file_name[compare_step] != compare_file_name[compare_step]){
        base_file_name[compare_step] = '?';
      }
    }
  }
  std::cout << base_file_name;
  return 0;
}