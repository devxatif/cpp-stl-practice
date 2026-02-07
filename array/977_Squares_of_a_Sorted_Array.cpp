#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    int nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];
    vector<int> neg;
    vector<int> pos;
    int i=0;
    bool s = false;
    while(i<n){
        if(nums[i]<0){
            neg.push_back(nums[i]);
            i++;
        }
        else {
            pos.push_back(nums[i]);
            i++;
        }
    }

    if(pos.size()==0){
        for(int i=0; i<neg.size(); i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        for(auto it: neg) cout<<it<<" ";
        s = true;
    }

    if(neg.size()==0){
        for(auto &v: pos){
            v = v*v;
        }
        for(auto it: pos) cout<<it<<" ";
        s = true;
    }

    for(int i=0; i<pos.size(); i++){
            pos[i]=pos[i]*pos[i];
    }

    for(int i=0; i<neg.size(); i++){
            neg[i]=neg[i]*neg[i];
    }
    reverse(neg.begin(),neg.end());    

    int p = pos.size();
    int q = neg.size();
    vector<int> res(p+q);
    int idx = 0;
    int x = 0;
    int y = 0;
    while(x<p && y<q){
        if(pos[x]<=neg[y]){
            res[idx]=pos[x];
            x++;
            idx++;
        }
        else{
            res[idx]=neg[y];
            y++;
            idx++;
        }
    }

    while(x<p){
        res[idx]=pos[x];
        x++;
        idx++;
    }

    while(y<q){
        res[idx]=neg[y];
        y++;
        idx++;
    }

    if(s!=true){
        for(auto it: res) cout<<it<<" ";
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}