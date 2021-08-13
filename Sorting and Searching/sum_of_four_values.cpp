#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    ll x;
    cin>>n>>x;
    ll a[n+1];
    a[0] = INT_MIN;
    map<ll,vector<ll>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        m[a[i]].push_back(i);
    }
    ll b[n+1][n+1] = {INT_MIN};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            b[i][j] = a[i]+a[j];
        }
    }

    

}