//단어 정렬 ~ 1181 @ 백준

#include <iostream>
#include <cstring>

//using namespace std;

int main(){
  char* word_list[20000];
  int word_length[20000];

  int step;
  std::cin >> step;

  for(int i = 0; i < step; i++){
    word_list[i] = new char[51];
    std::cin >> word_list[i];
    word_length[i] = strlen(word_list[i]);
  }

  while(1){
    bool pass = true;
    for(int i = 0; i < step - 1; i++){
      char* temp;
      if(word_length[i] > word_length[i + 1] || (word_length[i] == word_length[i + 1] && strcmp(word_list[i], word_list[i + 1]) > 0)){
        temp = word_list[i];
        word_list[i] = word_list[i + 1];
        word_list[i + 1] = temp;
        pass = false;
      }

    }
    if(pass){
      break;
    }
  }

  for(int i = 0; i < step; i++){
    if(strcmp(word_list[i], word_list[i - 1]) != 0){
    std::cout << word_list[i] << std::endl;
    }
  }
  for(int i = 0; i < step; i++){
    delete[] word_list[i];
  }
  return 0;
}