// 수 찾기 ~ 1920 @ 백준


#include <iostream>
#include <algorithm>

int data[100000];


int binary_search(int lo, int hi, int val){
    if (lo > hi) return 0;
    int mid = (hi - lo) / 2 + lo;

    if(data[mid] < val){
        return binary_search(mid+1, hi, val);
    }else if(data[mid] > val){
        return binary_search(lo, mid-1, val);
    }else{
        return 1;
    }
}


int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N;
    std::cin >> N;

    for(int i = 0; i < N; i++){
        std::cin >> data[i];
    } 
    
    std::sort(data, data+N);

    int M;
    std::cin >> M;

    for(int i = 0; i < M; i++){
        int input;
        std::cin >> input;
        std::cout << binary_search(0, N-1, input) << "\n";
    }

}

//20230822
//ㅋㅋ 잘된다