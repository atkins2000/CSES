#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string og, pat;
    cin>>og;
    cin>>pat;
    int n = og.size();
    int m = pat.size();
    int i=0;
    int j=0;
    int count=0;
    while(i<=n-m){
        if(og[i]!=pat[j]){
            i++;
        }
        else{
            if(j=m-1){
                count++;
                j=0;
                i++;
                i = i-m+1;
            }
            else{
                i++;
                j++;
            }
        }
    }
    cout<<m;
    return 0;
}
