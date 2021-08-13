#include<iostream>
using namespace std;

int main(){
    int n;
    int mod = 1e9+7;
    cin>>n;
    int dp[1000001] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    for(int i=7; i<=n; i++){
        for(int j=1; j<=6; j++){
            int temp = dp[i-j]%mod;
            dp[i]+=temp;
            dp[i] = dp[i]%mod;
        }
        
    }
    cout<<dp[n];
    return 0;
}


