#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string og,pat;
    cin>>og;
    cin>>pat;
    int count=0;
    int n=og.size();
    int m=pat.size();
    for(int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m; j++){
            if(og[i+j]!=pat[j])
                break;
        }
        if(j==m)
            count++;
    }
    cout<<count;
    return 0;
}