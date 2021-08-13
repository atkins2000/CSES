#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=0; i<m; i++){
        int j=0;
        while(j<n && b[i]<a[j]){
            j++;
        }
        if(j<n){
            cout<<a[j]<<"\n";
            a[j] = INT_MAX;
        }
        else{
            cout<<-1<<"\n";
        }
    }

}