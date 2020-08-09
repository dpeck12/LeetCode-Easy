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
    int depth(TreeNode *root){
        if(root == nullptr) return 0;
        // recursive
        return max(depth(root->left), depth(root->right))+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true; // is balanced
        
        // left branch
        int left = depth(root->left); // recursive
        // right branch
        int right = depth(root->right); // recursive
        
        // recursive
        // left and right subtrees of every node differ in height by no more than 1 
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);  
    }
};