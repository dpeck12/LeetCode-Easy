// given a binary tree and a SUM
// determine if the tree has a root-to-leaf path,
// such that adding up all values along the path equals the SUM
// leaf is a node with NO children

// AWFUL

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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr)
            return false; // root node does not exist
        
        if(root->val == sum && root->left == NULL && root->right == NULL)
            // left and right nodes is NULL so reached end of tree
            return true;
        
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

