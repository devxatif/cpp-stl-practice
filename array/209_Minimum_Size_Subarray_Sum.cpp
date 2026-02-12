// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

// Example 1:

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.
// Example 2:

// Input: target = 4, nums = [1,4,4]
// Output: 1



#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;cin>>target;
    
    int low=0;
    int high=0;
    int sum=0;
    int res=INT_MAX;
    while(high<n){
        sum = sum + nums[high];
        while(sum>=target){
            int len = high-low + 1;
            res = min(res,len);
            sum = sum - nums[low];
            low++;
        }
        high++;
    }

    if(res!=INT_MAX){
        cout<<res;
    }
    else cout<<0;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}