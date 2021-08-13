#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0; i<n; i++){
        ans = ans*2;
        ans = ans%(int(1e9+7));
    }
    cout<<ans;
    return 0;
}