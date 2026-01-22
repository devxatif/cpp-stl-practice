#include<bits/stdc++.h>
using namespace std;

void solved(){
    int n;
    cout<<"size of array(n): ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(auto it:nums) cout<<it;

    int target;
    cout<<"target: ";
    cin>>target;
    
    unordered_map<int,int>mp;

    for(int i=0; i<n; i++){
        int res = target - nums[i];
        if(mp.count(res)){
            cout<<mp[res]<<" "<<i<<endl;
        }
        else{
            mp[nums[i]] = i;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solved();
    }
    return 0;
}
