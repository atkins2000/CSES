#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        bool arr [a+1][b+1] = {false};
        arr[0][0] = true;
        arr[0][1] = false;
        arr[1][0] = false;
        arr[1][2] = true;
        arr[2][1] = true;
        arr[1][1] = false;
        for(ll i=2; i<=a; i++){
            for(ll j=2; j<=b; j++){
                arr[i][j] = (arr[i-2][j-1] || arr[i-1][j-2]);
            }
        }
        if(arr[a][b]==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}