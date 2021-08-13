#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<pair<int,int>>v1;
    ll x,y;
    for(ll i=0; i<n; i++){
        cin>>x;
        cin>>y;
        v1.push_back(make_pair(y,x));
    }
    sort(v1.begin(),v1.end());
    ll currenttime = 0;
    ll count = 0;
    for( auto ele:v1){
        if(ele.second>=currenttime){
            currenttime = ele.first;
            count++;
        }
    }
    cout<<count;
    return 0;
}