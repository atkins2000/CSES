#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, x;
    ll mod = 1e9+7;
    cin>>n>>x;
    ll c[n+1];
    c[0] = 0;
    for(ll i=1; i<=n; i++){
        cin>>c[i];
    }
    vector<vector<int>> dp(n+1, vector<int> (x+1, 0));
    dp[0][0] = 1;
    for(ll i=1; i<=n; i++){
        for(ll j=0; j<=x; j++){
            dp[i][j] = dp[i-1][j];
            if(c[i]<=j){
                dp[i][j] += dp[i][j-c[i]];
                dp[i][j] = dp[i][j]%mod;
            }
        }
    }
    cout<<dp[n][x];
    return 0;
}



// 0 1 2 3 4 5 6 7 8 9
// 1 0 0 0 0 0 0 0 0 0 
// 1 0 1 0 1 0 1 0 1 0
// 1 0 1 1 1 1 2 1 2 2
// 1 0 1 1 1 2 2 2 3 3


