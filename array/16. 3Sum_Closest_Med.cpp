// Given an integer array nums of length n and an integer target, 
// find three integers at distinct indices in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

 

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).



#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<<it<<" ";
    int target; cin>>target;

    sort(nums, nums+n);
    int diff=0;
    int max_diff = INT_MAX;
    int result_sum = 0;
    for(int k=0; k<n-2; k++){
        int i=k+1;
        int j=n-1;
        while(i<j){
            int sum = nums[k] + nums[i] + nums[j];
            if(sum == target){
                diff = abs(sum - target);
                if(diff < max_diff){
                    max_diff = diff;
                    result_sum= sum;
                    i++; j--;
                }
            }

            else if(sum < target){
                diff = abs(sum - target);
                if(diff < max_diff){
                    max_diff = diff;
                    result_sum = sum;
                }
                i++;
            }

            else{
                diff = abs(sum - target);
                if(diff < max_diff){
                    max_diff = diff;
                    result_sum = sum;
                }
                j--;
            }
        }
    }
    cout<<result_sum;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}