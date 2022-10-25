//곱셈 ~ 1629 @ 백준

#include <iostream>
#include <vector>
//using namespace std;


std::vector<std::vector<int>> multMat(std::vector<std::vector<int>> A, std::vector<std::vector<int>> B, int N, int c){
    std::vector<std::vector<int>> result;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            result[i][j] = 0;
            for(int k = 0; k < 4; ++k){
                result[i][j] += (A[i][k] * B[k][j]) % c;
            }
            result[i][j] %= c;
        }
    }
    return result;
}

std::vector<std::vector<int>> sqMat(std::vector<std::vector<int>> A, int N, int B, int c){
    if(B == 1){
        return A;
    }else if(B % 2 == 0){
        std::vector<std::vector<int>> resultA = sqMat(A, N, B / 2, c);
        std::vector<std::vector<int>> resultB = sqMat(A, N, B / 2, c);
        return multMat(resultA, resultB, N, c);
    }else{
        std::vector<std::vector<int>> resultA = sqMat(A, N, B / 2, c);
        std::vector<std::vector<int>> resultB = sqMat(A, N, B / 2 + 1, c);
        return multMat(resultA, resultB, N, c);
    }
}


int main(){
    std::vector<std::vector<int>> A(5);
    int N;
    int B;

    std::cin >> N >> B;
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
           int t;
           std::cin >> t;
           A[i].push_back(t);
        }
    }

    std::vector<std::vector<int>> result = sqMat(A, N, B, 1000);

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            std::cout << result[i][j];
        }
    }

}