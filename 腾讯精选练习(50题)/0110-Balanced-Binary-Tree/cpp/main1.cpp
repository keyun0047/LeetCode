/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
	int level(TreeNode* root) {
		if(root == NULL)
			return 0;

		return max(level(root->left), level(root->right)) + 1;
	}
public:
    bool isBalanced(TreeNode* root) {
    	if(root == NULL)
    		return true;

    	int factor = abs(level(root->left) - level(root->right));

    	return factor < 2 && isBalanced(root->left) && isBalanced(root->right);
        
    }
};