#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    ll mod = 1e9+7;
    cin>>n;
    ll arr[1000001];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    arr[4] = 8;
    arr[5] = 16;
    arr[6] = 32;
    if(n>=7){
        for(ll i=7; i<=n; i++){
            arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%mod;
        }
    }
    cout<<arr[n];
    return 0;
}

