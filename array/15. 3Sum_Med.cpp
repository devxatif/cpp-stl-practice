// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int nums[n];
    for(int i =0; i<n; i++) cin>>nums[i];
    // for(auto it:nums) cout<<it;

    sort(nums, nums + n);
    vector<vector<int>> result;
    for(int k=0; k<n-2; k++){
        if(k>0 && nums[k] == nums[k-1]) continue;
        int i= k+1;
        int j= n-1;
        int sum = -1 * nums[k];
        while(i<j){
            int s = nums[i] + nums[j];
            if(s == sum){
                result.push_back({nums[k], nums[i], nums[j]});
                i++;
                j--;
                while(i<n && nums[i] == nums[i-1]) i++;
                while(j>=0 && nums[j] == nums[j+1]) j--;
            }

            else if(s < sum) i++;
            else j--;
        }
    }

    for(auto it: result){
        for(int x: it){
            cout<< x << " ";
        }
    }






}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}