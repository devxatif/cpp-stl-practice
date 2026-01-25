#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<<it<< " ";
    int target; cin>>target;

    int i=0;
    int j=n-1;
    while(i<j){
        int sum= nums[i] + nums[j];
        if(sum == target){
            cout<<i+1<<" "<<j+1;
            return;
        }
        else if(sum<target) i++;
        else j--;
    }
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}