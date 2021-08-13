#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    bool flag = 0;
    int n;
    cin>>n;
    ll x;
    cin>>x;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int,vector<int>>m;
    for(int i=0;i<n;i++){
        m[a[i]].push_back(i);
    }
    sort(a,a+n);
    int i=0;
    int j=n-1;
    int star,end;
    while(i<j){
        if(a[i]+a[j]<x){
            i++;
        }
        else if(a[i]+a[j]>x){
            j--;
        }
        else if(a[i]+a[j]==x){
            flag=1;
            star = a[i];
            end = a[j];
            break;
        }
    }
    if(flag==1 && m[star]!=m[end]) cout<<m[star][0]+1<<" "<<m[end][0]+1;
    if(flag==1 && m[star]==m[end]) cout<<m[star][0]+1<<" "<<m[end][1]+1;
    else if(flag==0) cout<<"IMPOSSIBLE";
    return 0;
}