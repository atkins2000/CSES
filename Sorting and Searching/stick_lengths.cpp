#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n; 
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll p = floor(n/2);
    ll med = a[p];
    ll sum = 0;
    for(ll i=0; i<n; i++){
        sum = sum + abs(med-a[i]);
    }
    cout<<sum;
    return 0;
}