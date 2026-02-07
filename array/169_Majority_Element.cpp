#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];

    unordered_map<int,int>mp;
    for(auto it: nums) mp[it]++;
    int res = floor(n/2);
    bool x = false;
    for(auto it: mp){
        if(it.second > res){
            cout<<it.first;
            x = true;
        }
    }
    if(x==false) cout<<"false";
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}