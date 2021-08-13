#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string input;
    getline(cin, input);
    ll n = input.size();
    ll result = 1;
    ll first = 0;
    ll last = 1;
    ll i=0;
    while(first<n){
        if(input[first]==input[last]){
            result = max(result, last-first+1);
            last++;
        }
        else{
            first = last;
        }
    }
    cout<<result;
    return 0;
}