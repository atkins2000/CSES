#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    ll arr[n-1];
    for(ll i=0; i<n-1; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n-1);
    ll i = 1;
    ll j = 0;
    while(arr[j]==i){
        i++;
        j++;
    }
    cout<<i;
    return 0;
}