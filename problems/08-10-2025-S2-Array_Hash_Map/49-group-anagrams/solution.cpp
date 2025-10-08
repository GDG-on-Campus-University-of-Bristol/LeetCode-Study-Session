/*
    Solution: Categorize strings by count

    Two strings are anagrams if and only if their character counts are the same
    We turn each string into a character count and use these counts as the basis for the map

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) return {};
        unordered_map<string, vector<string>> ans;
        int count[26];
        for (string s : strs) {
            fill(begin(count), end(count), 0);
            for (char c : s) count[c - 'a']++;
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#";
                key += to_string(count[i]);
            }
            if (ans.find(key) == ans.end()) ans[key] = {};
            ans[key].push_back(s);
        }
        vector<vector<string>> res;
        for (auto itr = ans.begin(); itr != ans.end(); itr++) res.push_back(itr->second);
        return res;
    }
};

// Time and space complexity are O(NK) where N is the length of strs and K the max length of a string
