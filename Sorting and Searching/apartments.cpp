#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,m;
    ll k;
    cin>>n;
    cin>>m;
    cin>>k;
    ll a[n];
    ll b[m];
    int count=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(a[i]<(b[j]-k)){
            i++;
        }
        else if(a[i]>=(b[j]-k)&&a[i]<=(b[j]+k)){
            count++;
            i++;
            j++;
        }
        else if(a[i]>(b[j]+k)){
            j++;
        }
    }
    cout<<count;
    return 0;
}


