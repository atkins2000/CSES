//initial approach via set and pointers did not work since the pointer needs to be reset once the set 
//gets cleared, check the initial approach problem of CSES


#include<bits/stdc++.h>
using namespace std;
int main(void){
    	int n,i,j;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	int l=0,r=0,ans=0;
    	map<int,int>mp1;//counting occurence
    	map<int,int>mp2;//setting positions
    	for(i=0;i<n;i++){
    		mp1[a[i]]++;
    		if(mp1[a[i]]==1){
    			mp2[a[i]]=i;
    			r=i;
    		}
    		else{
    			for(j=l;j<=mp2[a[i]];j++)
    			mp1[a[j]]--;
    			l=mp2[a[i]]+1;
    			r=i;
    			mp2[a[i]]=i;
    		}
    		ans=max(ans,r-l+1);
    	}
    	cout<<ans;
}