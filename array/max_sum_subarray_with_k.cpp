// Max Sum Subarray of size K
// Difficulty: EasyAccuracy: 49.6%Submissions: 255K+Points: 2
// Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

// Note: A subarray is a contiguous part of any given array.

// Examples:

// Input: arr[] = [100, 200, 300, 400], k = 2
// Output: 700
// Explanation: arr2 + arr3 = 700, which is maximum.
// Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
// Output: 39
// Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int k;cin>>k;

    int low=0;
    int high=k-1;
    int sum=0;
    int res=INT_MIN;
    for(int i=low; i<=high;i++) sum = sum + nums[i];
    while(high<n){
        res = max(res,sum);
        low++;
        high++;
        if(high==n) break;
        sum = sum - nums[low-1];
        sum = sum + nums[high];
    }
    cout<<res;

}
int main(){
    int t;cin>>t;
    while(t--) solve();
}