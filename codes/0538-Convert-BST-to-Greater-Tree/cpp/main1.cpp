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
class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        helper(root, sum);
        return root;
    }

    void helper(TreeNode* node, int &sum) {
    	if (!node) return;
    	helper(node->right, node);
    	node->val += sum;
    	sum = node->val;
    	helper(node->left, sum);
    }
};