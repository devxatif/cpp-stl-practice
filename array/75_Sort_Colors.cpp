// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]


#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0 ; i<n; i++) cin>>nums[i];
    // for(auto it: nums) cout<<it<<" "<<endl;
    int low = 0; // this is for 0s
    int mid = 0; // this is for 1s and take it for checking.
    int high = n -1;// this is for 2s

    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) mid++;
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for(auto it: nums) cout<<it<<" ";




}
int main(){
    int t;cin>>t;
    while(t--) solve();
}