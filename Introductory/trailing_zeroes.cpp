#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll div = 5;
    int sum=0;
    while(div<=n){
        sum = sum+(n/div);
        div = div*5;
    }
    cout<<sum; 
    return 0;
}