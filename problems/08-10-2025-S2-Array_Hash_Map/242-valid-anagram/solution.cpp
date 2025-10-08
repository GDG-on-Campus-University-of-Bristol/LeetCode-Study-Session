/*
    Solution: Count occurences of each character

    We could use two hash maps however we have at most 26 characters so an array is sufficient
*/


class Solution {
public:
    public boolean isAnagram(String s, String t) {
    if (s.length() != t.length()) {
        return false;
    }
    int[] counter = new int[26];
    for (int i = 0; i < s.length(); i++) {
        counter[s.charAt(i) - 'a']++;
        counter[t.charAt(i) - 'a']--;
    }
    for (int count : counter) {
        if (count != 0) {
            return false;
        }
    }
    return true;
}

};


/*
    Time complexity:   O(n)
    Space Complexity:  O(1)
*/


// Follow up: Adapt solution to take into account unicode character