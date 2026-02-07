


#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    for(auto it: nums) cout<<it<<" "<<endl;
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
    for(int k=0; k<n-2; k++){
        if(k>0 && nums[k]==nums[k-1]) continue;
        int i=k+1;
        int j=n-1;
        int fix_num = -1*nums[k];
        while(i<j){
            int sum = nums[i] + nums[j];
            if(sum==fix_num){
                result.push_back({nums[k],nums[i],nums[j]});
                i++;
                j--;
                while(i<n && nums[i]==nums[i-1]) i++;
                while(j>0 && nums[j]==nums[j+1]) j--;
            }
            else if(sum<fix_num) i++;
            else j--;
        }
    }
    for(auto arr: result){
        for(auto val:arr){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int t;cin>>t;
    while(t--) solve();

}