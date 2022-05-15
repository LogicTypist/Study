#include <iostream>
#include <random>
using namespace std;

int coins[13] = {0, 1,1,1,1,1,1,1,1,1,1,1,1};

int s(int a, int b)
{
  int ret = 0;
  for(int i=a;i<=b;++i) ret += coins[i];
  return ret;
}

pair<int,int> solve()
{
  // 1 2 3 4 <-> 5 6 7 8
  if(s(1, 4) < s(5, 8))
  {

  }
  else if(s(1,4) > s(5, 8))
  {
    int x = s(1,2) + s(5, 5);
    int y = s(6,6) + s(3,3) + s(9,9);
    if(x<y)
    {
      if(s(5,5) == s(12, 12)) return {3, 2};
      else return {5, 0};
    }
    else if(x > y)
    {
      if(s(1,1) < s(2, 2)) return {2, 2};
      else if(s(1,1) > s(2,2)) return {1,2};
      else return {6, 0};
    }
    else
    {
      // 4, 7, 8
      if(s(7,7) < s(8,8)) return {7, 0};
      else if(s(7,7) > s(8,8)) return {8,0};
      else return {4, 2};
    }
  }
  else
  {

  }

}

int main(){
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dis(0, 3);
  std::uniform_int_distribution<int> h_or_l(0, 1);

  for(int i=0;i<1000;++i)
  {
    for(int j=1;j<=12;++j) coins[j] = 1;
    int fake = dis(gen);
    int h_l = h_or_l(gen);
    if(h_l == 0){
      coins[fake+5]--;
    }else{
      coins[fake+1]++;
    }

    pair<int,int> ans = solve();
    if(coins[ans.first] != ans.second) cout << ans.first << ' ' << coins[ans.first] << ' ' << ans.second << endl;
  }
  return 0;
  


 

  // int buf;
  // std::cin >> buf;

  // std::cout << "정답은 " << fake+1 << "번째 동전이" << (h_l == 0 ? " 가볍습니다." : " 무겁습니다.") << std::endl;



  return 0;
} 


// for(int test = 0; test < 3; test++){
  //   int A[4];
  //   int B[4];
  //   int sumA = 0;
  //   int sumB = 0;

  //   std::cout << "A : ";
  //   for(int i=0; i<12; i++){
  //     int input;
  //     std::cin >> input;
  //     if(input == 0)
  //       break;
  //     sumA += coins[input-1];
  //   }

  //   std::cout << "B : ";
  //   for(int i=0; i<12; i++){
  //     int input;
  //     std::cin >> input;
  //     if(input == 0)
  //       break;
  //     sumB += coins[input-1];
  //   }
    
  //   if(sumA > sumB){
  //     std::cout << "A > B" << std::endl;
  //   }else if(sumA < sumB){
  //     std::cout << "A < B" << std::endl;
  //   }else{
  //     std::cout << "A = B" << std::endl;
  //   }
  // }