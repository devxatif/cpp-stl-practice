#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<< it<<" ";
    cout<<"\n";

    unordered_map<int, int>mp;
    for(auto it: nums) mp[it]++;

    int mx = 0;
    for(auto it:mp) mx = max(mx, it.second);

    int tf = 0;
    for(auto it:mp){
        if(it.second==mx){
            tf = tf + mx;
        }
    }

    cout<<tf;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}