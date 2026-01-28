#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<<it<<" ";
    
    bool x = false;
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        if(mp.count(nums[i])){
            x=true;
            break;
        }
        else mp[nums[i]]=i;
    }
    if(x==true){
        cout<<"true";
    }
    else cout<<"false";
 
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

}