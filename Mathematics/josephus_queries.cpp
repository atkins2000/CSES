#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int q;
    cin>>q;
    ll arr[q][2];
    for(int i=0; i<q; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for(int i=0; i<q; i++){
        int n = arr[i][0];
        int k = arr[i][1];
        int count = 0;
        ll sortarr[n];
        for(int j=0; j<n; j++){
            sortarr[j]=j;
        }
        while(count<k){
            sort(sortarr,sortarr+n);
            if(sortarr[1]!=INT_MAX){
                for(int j=1; j<n-count; j=j+2){
                    sortarr[j]=INT_MAX;
                    count++;
                    if(count==k)cout<<sortarr[j];
                }
            }    
            else cout<<1;
        }
    }
    return 0;
}