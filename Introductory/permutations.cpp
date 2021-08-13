#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    if(n==1)cout<<1;
    if(n==2||n==3)cout<<"NO SOLUTION";
    if(n>=4){
        for(int i=2; i<=n; i=i+2){
            cout<<i<<" ";
        }
        for(int i=1; i<=n; i=i+2){
            cout<<i<<" ";
        }
    }
    return 0;
}