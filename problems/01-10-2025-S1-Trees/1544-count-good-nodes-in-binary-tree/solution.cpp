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
 * Solution 1: DFS Recursive
 * 
 * Although we don't cover graphs today
 * A good rule of thumb with graph and tree LC problems should
 * be how can we properly traverse this?
 * 
 * This implies our first instinct should always be BFS/DFS
 * 
 * Here we are focusing on the greatest value seen
 * So we can define our function to take an integer as well as
 * a node
 * i.e dfs(node, integer) where our integer is the greatest value on
 * the path from the root to the node X
 */


class Solution {
public:
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        int count = 0;
        dfs(root, INT_MIN, count);
        return count;
    }

private:
    void dfs(TreeNode* node, int maxSoFar, int& count) {
        if (!node) return;

        // If current node is >= every node on the path from root so far, it's "good".
        if (node->val >= maxSoFar) ++count;

        int nextMax = max(maxSoFar, node->val);

        // Order (right then left) matches your Java, but it doesn't affect the result.
        if (node->right) dfs(node->right, nextMax, count);
        if (node->left)  dfs(node->left,  nextMax, count);
    }
};