#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct{
    int start;
    int end;
}movie;

int main(){
    int n;
    cin>>n;
    movie a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].start;
        cin>>a[i].end;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i].start>a[j].start){
                movie temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else if(a[i].start==a[j].start && a[i].end>a[j].end){
                movie temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    reverse(a,a+n);
    // int count = 1;
    // int currenttime = a[0].end;
    // for(int i=1; i<n; i++){
    //     if(currenttime<=a[i].start){
    //         count++;
    //         currenttime = a[i].end;
    //     }
    // }
    //cout<<count;
    for(int i=0; i<n; i++){
        cout<<a[i].start;
        cout<<a[i].end;
    }
    return 0;
}