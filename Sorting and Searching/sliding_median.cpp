#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,k;
    cin>>n>>k;
    ll x[n];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n-k+1; i++){
        vector<ll>ar;
        for (ll j=0; j<k; j++){
            ar.push_back(x[i+j]);
        }
        sort(ar.begin(),ar.end());
        if(k%2!=0)cout<<ar[floor(ar.size()/2)]<<" ";
        else cout<<ar[(k/2)-1]<<" ";
    }
    return 0;
}

//TLE in some cases
//use implicit treaps