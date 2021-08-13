#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.size();
    int arr[26] = {0};
    for(int i=0; i<n; i++){
        arr[str[i]-65]++;
    }
    int oddflag = 0;
    int index, count;
    for(int i=0; i<26; i++){
        if(arr[i]%2!=0){
            oddflag++;
            count=arr[i];
            index = i;
            arr[i] = 0;
        }
    }
    if(oddflag>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        string final;
        for(int i=0; i<26; i++){
            int times = arr[i]/2;
            while(times>0){
                final = final + char(i+65);
                times--;
            }
        }
        if(oddflag = 0) {
            for(int i=25; i>=0; i--){
                int times = arr[i]/2;
                while(times>0){
                    final = final + char(i+65);
                    times--;
                }
            }
            cout<<final;
        }
        if(oddflag = 1){
            while(count--){
                final = final + char(index+65);
            }
            for(int i=25; i>=0; i--){
                int times = arr[i]/2;
                while(times>0){
                    final = final + char(i+65);
                    times --;
                }
            }
            cout<<final;
        }
    }
    return 0;
}