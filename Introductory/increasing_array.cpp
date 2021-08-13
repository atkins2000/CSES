#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll final = 0;
    int n;
    ll temp1, temp2;
    cin>>n;
    cin>>temp1;
    for(int i=1; i<n; i++){
        cin>>temp2;
        if(temp2<temp1){
            final = final+(temp1-temp2);
        }
        else{
            temp1 = temp2;
        }
    }
    cout<<final;
    return 0;
}