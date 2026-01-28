#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int x= -1;
    unordered_map<int,int>mp;
    for(auto it:s) mp[it]++;
    for(int i=0 ; i<s.size(); i++){
        if(mp[s[i]]==1){
            x = i;
            cout<<i;
            break;
        }
    }
    if(x==-1){
        cout<<-1;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}