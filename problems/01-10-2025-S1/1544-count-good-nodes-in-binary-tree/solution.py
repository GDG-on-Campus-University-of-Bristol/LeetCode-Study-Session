# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Good node (at node X) => the path from root to X, 
#                          X must be >= to all path values

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        
        def dfs(node, max_val):
            
            if not node:
                return 0

            # logic to decide good nodes 
            good = 1 if node.val >= max_val else 0
            # update the max_val for its children since we have
            # encounter a new val (i.e. current node)
            max_val = max(node.val, max_val)
            # recursively call on left and right subtree
            left = dfs(node.left, max_val)
            right = dfs(node.right, max_val)
            # add up all the good nodes on left and right subtree
            # and also the current node
            return good + left + right

        return dfs(root, root.val)
        
        