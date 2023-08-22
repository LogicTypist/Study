//단어 정렬 ~ 1181 @ 백준

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//using namespace std;

struct {
    bool operator()(std::string a, std::string b) const {
        if(a.length() < b.length()){
            return true;
        }else if(a.length() > b.length()){
            return false;
        }else{
            return a < b;
        }
    }
} customLess;

int main(){
    std::vector<std::string> vec;

    int words;
    std::cin >> words;

    for(int i = 0; i < words; ++i){
        std::string word;
        std::cin >> word; 
        vec.push_back(word);
    }

    std::sort(vec.begin(), vec.end(), customLess);

    std::vector<std::string>::iterator it;
    for(it = vec.begin(); it != vec.end(); ++it){
        if(*it == *(it + 1)){
            vec.erase(it);
            --it;
        }
    }

    for(it = vec.begin(); it != vec.end(); ++it){
        std::cout << *it << std::endl;
    }

}