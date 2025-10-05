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
  * Solution 2! (Not intuitve but accepted)
  * 
  * We can implement a DFS algorithm via recursion
  * 
  * Define a recursive function called DFS(node, level)
  * This only takes care of the current node which is located
  * at the specified level
  * 
  * If this is the first time we visit the node at the level
  * then we create the deque with the current node value
  * 
  * If the deque for this level exists then depending on the ordering
  * we insert the current node value either to the head or tail
  * 
  * At the end we recursively call the function for each child node
  * 
  */


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // same case as soln 1 empty tree is just an empty array
        if (root == nullptr) return {};

        vector<deque<int>> ans;

        // define a lambda that will perform our dfs
        function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int level) {
            if (!node) return;
            
            // First time we see the level grow our answer
            if (level >= ans.size()) ans.emplace_back(deque<int>(1, node->val));

            // Level already exists:
            // Even level -> left-to-right (append at back)
            // Odd  level -> right-to-left (append at front)
            else {
                if (level % 2 == 0) ans[level].push_back(node->val);
                else ans[level].push_front(node->val);
            }
            if (node->left != nullptr) dfs(node->left, level + 1);
            if (node->right != nullptr) dfs(node->right, level + 1);
        };
        dfs(root, 0);

        // Convert vector<deque<int>> -> vector<vector<int>> for the return type.
        vector<vector<int>> final_ans;
        for (auto a : ans) final_ans.push_back(vector<int>{a.begin(), a.end()});

        return final_ans;
        
    }
};