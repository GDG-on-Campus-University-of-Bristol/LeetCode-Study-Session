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
 * Solution idea 1. (Most intuitive)
 * 
 * Perform a BFS approach when we traverse the tree
 * Note, the default ordering of BFS is left-to-right
 * Because of above we have to adjust our BFS
 * A deque is a very useful data structure to use here
 * With a deque we can process both FIFO and LIFO ordering
 * Because of this we can effectively get our zig-zag order
 * 
 * Note: A queue is still acceptable whilst utilising reversing
 * 
 */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // empty tree just means empty array
        if (root == nullptr) return {};

        vector<vector<int>> ans;
        deque<TreeNode*> queue;
        // Add the root
        queue.push_back(root);
        queue.push_back(nullptr); // A delimiter to process levels
        deque<int> levels;

        bool is_order_left = true; // To check our direction for each level
        while (!queue.empty()) {
            TreeNode* temp = queue.front(); queue.pop_front();

            if (temp != nullptr) {
                if (is_order_left) levels.push_back(temp->val);
                else levels.push_front(temp->val);

                if (temp->left) queue.push_back(temp->left);
                if (temp->right) queue.push_back(temp->right);
            } else {
                // Add the current level to result
                ans.push_back(vector<int>{levels.begin(), levels.end()});
                // prepare for the next level;
                levels.clear();
                if (!queue.empty()) queue.push_back(nullptr);
                is_order_left = !is_order_left;
            }
        }
        return ans;

        
    }
};