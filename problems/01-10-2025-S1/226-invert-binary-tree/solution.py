# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        
        # edge case: when the current node is None 
        if not root:
            return

        # swap the left and right child of the current node
        root.left, root.right = root.right, root.left
        # recursively call on left and right child
        self.invertTree(root.left)
        self.invertTree(root.right)
        
        return root
    
    