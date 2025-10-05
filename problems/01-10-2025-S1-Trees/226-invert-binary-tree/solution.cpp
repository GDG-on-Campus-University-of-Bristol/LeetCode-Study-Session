/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


 /**
  * Solution DFS recursive:
  * 
  * Traverse the subtrees until you can't and then perform swaps
  * 
  */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Base case, inverse of an empty tree is an empty tree
        if (root == nullptr) return nullptr;
        // recursively traverse each subtree
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        // Once we cant traverse left or right we perform a swap
        root->left = right;
        root->right = left;
        // Once the swap is performed we backtrack
        return root;
    }
};