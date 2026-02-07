#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];

    int i = 0;
    int j = 1;
    while(j<n){
        if(nums[j] == nums[j-1]) j++;
        else{
            nums[i+1] = nums[j];
            j++;
            i++;
        }
    }
    cout<<i+1;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}