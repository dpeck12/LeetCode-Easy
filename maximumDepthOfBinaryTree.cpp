// given a binary tree, find its maximum depth
// number of nodes along the longest path,
// from root node down to farthest leaf node

// CONDITIONAL TERNARY OPERATOR (?)
// condition ? result1 : result2
// if condition is true, evaluates to result1, else result2

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
    int maxDepth(TreeNode* root) {
        // return root == NULL ? statemen1 : statement2
        // recursive
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1; 
    }
};