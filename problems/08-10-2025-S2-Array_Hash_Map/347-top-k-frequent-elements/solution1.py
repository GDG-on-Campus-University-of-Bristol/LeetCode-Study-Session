class Solution:
    
    # Example : [1, 2, 2, 3, 3, 3, 4, 4, 4], k = 3
    # Output : [4, 3, 2]
    # Bucket sort works in this case because 1 <= k <= len(nums)
    # i.e. the max frequency can only be upto len(nums)
    
    # O(n + ) time complexity => building freq table
    # O(n) space complexity
        
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        # idea:
        # Create a list of bucket that store the num in nums list
        # it's index is the frequency 
        # e.g. at index 3, we have [3, 4] since 3 and 4 have a freq of 3
        # We pop the bucket

        # we can have upto len(nums) frequent element
        # e.g input can be [5,5,5,5,5] k = 5
        buckets = [[] for _ in range(len(nums) + 1)]
        nums_dict = {}
        res = []

        # build up the frequency table {num : freq} => 
        # {1: 1, 2: 2, 3: 3}
        for num in nums:
            nums_dict[num] = nums_dict.get(num, 0) + 1

        # [[1], [2], [3, 4]]
        for num, freq in nums_dict.items():
            buckets[freq].append(num)

        # start from the last bucket since this is the most frequent 
        # loop to find whether we have element that is correspond to this
        # frequency, pop it and append it into our res

        freq = len(nums)
        while k > 0 and freq > 0 :
            # loop the buckets[freq] to pop the element in this bucket
            # remember to decrement k
            while k > 0 and buckets[freq]:
                res.append(buckets[freq].pop())
                k -= 1
            # if there is not more element correspond to this freq
            # then go to the lower freq
            freq -= 1

        return res
        