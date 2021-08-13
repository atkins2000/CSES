#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    sort(p,p+n);
    ll sum1 = p[n-1]; 
    ll sum2 = 0;
    for(int i=n-2; i>=0; i--){
        if(sum1>sum2){
            sum2 = sum2+p[i];
        }
        else{
            sum1 = sum1+p[i];
        }
    }
    cout<<abs(sum2-sum1);
    return 0;
}