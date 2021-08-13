#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,q;
    cin>>n;
    cin>>q;
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    ll psum[n+1];
    psum[0]=arr[0];
    for(int i=1; i<n; i++){
        psum[i] = psum[i-1]+arr[i];
    }
    while(q--){
        ll a;
        ll b;
        cin>>a>>b;
        ll sum;
        if(a!=b) sum = psum[b]-psum[a-1];
        else sum = psum[b-1];
        cout<<sum<<"\n";
    }
    return 0;
}