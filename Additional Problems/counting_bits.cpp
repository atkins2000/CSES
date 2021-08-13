#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll mult = 1;
    ll count = 0;
    while(n>=mult){
        count++;
        mult = mult*2;
    }
    ll ans = (n+1)*count/2;
    cout<<ans;
    return 0;
}