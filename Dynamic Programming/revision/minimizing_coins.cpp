#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    cin>>x;
    int c[n];
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    int dp[x+1] = {INT_MAX};
    sort(c,c+x);
    if(c[0]>x) {
        cout<<-1;
        return 0;
    }
    for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i-c[j]>=0){
                dp[i] = min(dp[i], dp[i-c[j]]+1);
            }
        }
    }
    if(dp[x]==INT_MAX) cout<<-1;
    else cout<<dp[x];
    return 0;
}