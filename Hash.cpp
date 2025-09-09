#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp; 
    for (int i = 0; i < arr.size(); i++) {
        int diff = target - arr[i];
        if (mp.find(diff) != mp.end()) {
            return {mp[diff], i}; 
        }
        mp[arr[i]] = i; 
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> ans = twoSum(arr, target);
    cout <<"."<< "Indices::  [" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
