#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    ll arr[n];
    int result = 0;
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i-1]){
            result = result+1;
        }
    }
    cout<<result;
    return 0;
}