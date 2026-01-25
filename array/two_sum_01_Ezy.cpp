#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<<it<< " ";

    int target; cin>>target;

    unordered_map<int, int>mp;
    int i = 0;
    while(i<n){
        int req_num = target - nums[i];
        if(mp.count(req_num)) cout<<i<<" "<<mp[req_num];
        else mp[nums[i]] = i;
        i++;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

