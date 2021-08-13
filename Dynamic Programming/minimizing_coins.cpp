#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// int main(){
//     int n,x;
//     cin>>n;
//     cin>>x;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int dp[x+1] = {1000000000};
//     dp[0]=0;
//     for(int i=1; i<=x; i++){
//         for(int j=0; j<n; j++){
//             if(i-arr[j]>=0){
//                 dp[i] = min(dp[i], dp[i-arr[j]]+1);
//             }
//         }
//     }
//     cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  vector<int> c(n);
  for (int&v : c) cin >> v;

  vector<int> dp(target+1,1e9);
  dp[0] = 0;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < n; j++) {
      if (i-c[j] >= 0) {
	dp[i] = min(dp[i], dp[i-c[j]]+1);
      }
    }
  }
  cout << (dp[target] == 1e9 ? -1 : dp[target]) << endl;
}