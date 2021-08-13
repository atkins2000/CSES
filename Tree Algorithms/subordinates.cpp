//looped questions can't be solved with a fixed one sided approach
//find a two sided approach to work 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
    int key;
    vector<node*> v1;
    int sub = 0;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    node arr[n];
    for(ll i=0; i<n; i++){
        arr[i].key = i+1;
    }
    for(int i=1; i<n; i++){
        int temp;
        cin>>temp;
        arr[temp-1].v1.push_back(&arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        int temp = arr[i].v1.size();
        arr[i].sub = arr[i].sub + temp;
        for(int j=0; j<temp; j++){
            arr[i].sub = arr[i].sub + arr[i].v1[j]->sub; 
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i].sub<<" ";
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<arr[i].v1.size(); j++){
    //         cout<<arr[i].v1[j]->key;
    //     }
    //     cout<<"\n";
    // }
    return 0;
}


