#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct{
    ll numb;
    vector<node*> next;
} node;

ll solve(node x){
    if(x.next.empty()){
        return 
    }
    else{
        
    }
}

int main(){
    ll n;
    cin>>n;
    node arr[n+1];
    for(ll i=1; i<=n; i++){
        arr[i].numb = i;
    }
    for(ll i=1; i<n; i++){
        ll temp1, temp2;
        cin>>temp1>>temp2;
        arr[temp1].next.push_back(&arr[temp2]); 
    }
    ll ans = solve(arr[1]);
    cout<<ans;
    return 0;
}

