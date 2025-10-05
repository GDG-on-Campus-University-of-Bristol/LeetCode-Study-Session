class Solution:
    # O(n) time, O(n) space
    
    def isAnagram(self, s: str, t: str) -> bool:
        
        # use s_dict and t_dict to store each char {char : count}
        # compare the s == t

        if len(s) != len(t):
            return False

        s_dict = {}
        t_dict = {}

        for c in s:
            s_dict[c] = s_dict.get(c, 0) + 1
        
        for c in t :
            t_dict[c] = t_dict.get(c, 0) + 1
        
        return s_dict == t_dict