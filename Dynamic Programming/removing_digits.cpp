#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    for(int i=1; i<=9; i++){
        dp[i] = 1;
    }
    dp[0] = 0;
    dp[10] = 2;
    if(n<=9){
        cout<<1;
        return 0;
    }
    else{
        vector<int>digits;
        for (int i=11; i<=n; i++){
            int temp = i;
            while(temp!=0){
                int r = temp%10;
                digits.push_back(r);
                temp = temp/10;
            }
            for(auto ele: digits){
                dp[i] = min(dp[i], dp[i-ele]+1);
            }
            digits.clear();   
        }
    }
    cout<<dp[n];
    return 0;
}