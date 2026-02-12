#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>> nums[i];

    sort(nums.begin(), nums.end());
    int i = 0;
    int count = 0;
    while(i<n-2){
        int left = i+1;
        int right = n-1;
        while(left < right){
            int sum = nums[i]+nums[left]+nums[right];
            if(sum>=target) right--;
            else{
                count = count + (right - left);
                left++;
            }
        }
        i++;
    }
    cout<<count;


}
int main(){
    int t;cin>>t;
    while(t--) solve();
}
