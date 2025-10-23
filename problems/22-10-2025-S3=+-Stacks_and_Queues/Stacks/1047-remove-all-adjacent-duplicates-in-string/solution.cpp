class Solution {
public:
    string removeDuplicates(string s) {
        // Strings in C++ are mutable, use the answer as a stack directly
        string ans = "";
        for (char c: s) {
            if (!ans.empty() && ans.back() == c) {
                ans.pop_back();
            } else {
                ans.push_back(c);
            }
        }
        
        return ans;
    }
};