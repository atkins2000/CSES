#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    if(n>=2){
        for(ll i=1; i<=n; i++){
            cout<<((i*i*(i*i-1))/2)-4*(i-1)*(i-2)<<"\n"; 
        }
    }
    return 0;
}