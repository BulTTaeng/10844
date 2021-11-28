#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int dp[2][11] = { 0, };

  for(int i =1; i<=9; i++){
    dp[1][i] = 1;
  }
  
  int ans = 0;

  for(int i =2; i<=N; i++){
    dp[i%2][0] = dp[(i-1) % 2][1];
    for(int j =1; j<=9; j++){
      dp[i%2][j] = (dp[(i-1)%2][j-1] + dp[(i-1)%2][j+1]) % 1000000000;  
    }
  }

  for(int i =0; i<=9 ; i++){
    ans = (ans + dp[N%2][i]) %1000000000;  
  }

  cout << ans;

  return 0;

}