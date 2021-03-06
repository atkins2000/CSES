#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int mod = 1e9+7;
    vector<vector<int>>inp(n,vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char temp;
            cin>>temp;
            if(temp=='*'){
                inp[i][j] = 1;
            }
        }
    }
    vector<vector<int>>dp(n,vector<int>(n,0));
    dp[0][0] = 1;
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            if(inp[i][j] == 1){
                dp[i][j] = 0;
            }
            else{
                if(i>0){
                    dp[i][j] = dp[i][j] + dp[i-1][j];
                    dp[i][j] = dp[i][j]%mod;
                }
                if(j>0){
                    dp[i][j] = dp[i][j] + dp[i][j-1];
                    dp[i][j] = dp[i][j]%mod;
                }
            }
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}