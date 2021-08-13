#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>ans;
    ans.push_back(s);
    while(next_permutation(s.begin(),s.end())){
        ans.push_back(s);
    }
    cout<<ans.size()<<"\n";
    for(auto &ele: ans){
        cout<<ele<<"\n";
    }
    return 0;
}