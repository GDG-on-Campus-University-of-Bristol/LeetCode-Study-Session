# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        # Easier to use BFS to traversal than DFS (Intuitively)
        # since we append the node to our result level by level
        
        # We know that once we have apppended the current level
        # our next level traversal needs to be in reverse order
        # we can use a flag to toggle the order of traversal

        if not root:
            return []    
    
        queue = collections.deque([root])
        leftToRight = True
        res = []

        while queue:
            
            level = []

            for _ in range(len(queue)):
                # queue FIFO: (First In First Out)
                node = queue.popleft()
                
                # add the left and right child to the queue (next level)
                queue.append(node.left) if node.left else None
                queue.append(node.right) if node.right else None

                # append this value to the current level
                level.append(node.val)
            
            # check the flag is it leftToRight:
            # if true then normal BFS order
            # if not then the level order is reversed
            if leftToRight:
                res.append(level)
            else:
                res.append(level[::-1])

            leftToRight = not leftToRight

        return res
