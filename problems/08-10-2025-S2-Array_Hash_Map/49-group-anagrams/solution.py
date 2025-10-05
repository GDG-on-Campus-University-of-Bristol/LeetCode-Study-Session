class Solution:
    # O(26*n) (26 alphabet) time complexity => O(N)
    # O(26*n) space
     
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        res = collections.defaultdict(list)
        # loop each word in strs, use an array to store the alphabet table
        # for each word, we create an array [0]*26 for 26 char 
        # idx = ord(c) - ord("a") to store the occurence of the char c
        # res => {alphabet_array : words} 
        # we just need to return a list of all values in the res
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            
            res[tuple(count)].append(s)
        
        return list(res.values())

