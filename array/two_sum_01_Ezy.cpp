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
    
    
}

int main(){
    int t; cin>>t;
    while(t--){
        solved();
    }
    return 0;
}
