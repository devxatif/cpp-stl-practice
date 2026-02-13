// Longest Substring with K Uniques
// Difficulty: MediumAccuracy: 34.65%Submissions: 264K+Points: 4
// You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find the length of the longest substring that contains exactly k distinct characters.

// Note : If no such substring exists, return -1. 

// Examples:

// Input: s = "aabacbebebe", k = 3
// Output: 7
// Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.
// Input: s = "aaaa", k = 2
// Output: -1
// Explanation: There's no substring with 2 distinct characters.



#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int k;cin>>k;
    int low = 0;
    int high = 0;
    int res = INT_MIN;
    unordered_map<char,int> mp;
    while(high<n){
        mp[s[high]]++;
        while(mp.size()>k){
            mp[s[low]]--;
            if(mp[s[low]]==0) mp.erase(s[low]);
            low++;
        }

        if(mp.size()==k){
            int len = high - low + 1;
            res = max(res,len);
        }
        high++;
    }
    if(res!=INT_MIN) cout<<res;
    else cout<<-1;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}