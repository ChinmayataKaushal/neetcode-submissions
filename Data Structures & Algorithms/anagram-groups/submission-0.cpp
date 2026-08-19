#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> mp;
        for(int i=0; i< strs.size(); i++){
            string str1 = strs[i];
            sort(str1.begin(), str1.end());
            mp[str1].push_back(strs[i]);
        };
        for (auto& it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};
