#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,x;
    cin>>n;
    cin>>x;
    ll mod = 1e9+7;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    if(x<arr[0]){ 
        cout<<0;
        return 0;
    }
    ll dp [x+1] = {0};
    for(ll i=0; i<n; i++){
        dp[arr[i]]=1;
        
    }
    for(ll i=0; i<=x; i++){
        for(ll j=0; j<n; j++){
            if(arr[j]<i){
                dp[i] = dp[i] + dp[i-arr[j]];
                dp[i] = dp[i]%mod;
            }
        }
    }
    cout<<dp[x];
    return 0;
}