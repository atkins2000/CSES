#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    vector<int>v1,v2;
    if(n%4==3||n%4==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO";
        return 0;
    }
    if(n%4==3){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
        if(n>4){
            for(int i=4;i<n; i=i+4){
                v1.push_back(i);
                v1.push_back(i+3);
                v2.push_back(i+1);
                v2.push_back(i+2);
            }
        }
        cout<<v1.size()<<endl;
        for(auto& it : v1){
            cout<<it<<" ";
        }
        cout<<"\n";
        cout<<v2.size()<<endl;
        for(auto& it : v2){
            cout<<it<<" ";
        }
    }
    if(n%4==0){
        cout<<n/2<<endl;
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
        if(n>4){
            for(int i=4;i<n; i=i+4){
                v1.push_back(i+1);
                v1.push_back(i+4);
                v2.push_back(i+2);
                v2.push_back(i+3);
            }
        }
        for(auto& it : v1){
            cout<<it<<" ";
        }
        cout<<"\n";
        cout<<n/2<<endl;
        for(auto& it : v2){
            cout<<it<<" ";
        }
    }
    return 0;
}