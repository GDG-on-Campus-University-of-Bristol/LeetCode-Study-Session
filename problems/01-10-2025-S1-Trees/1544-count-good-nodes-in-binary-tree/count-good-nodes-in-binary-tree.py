# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        
        def dfs(curr, max_val):

            if not curr:
                return 0

            good = 1 if curr.val >= max_val else 0
            max_val = max(curr.val, max_val)
            left = dfs(curr.left, max_val)
            right = dfs(curr.right, max_val)
            return good + left + right

        return dfs(root, root.val)
