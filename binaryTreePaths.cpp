// given binary tree, return all root-to-leaf paths 
// LEAF is a node with no children

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
    void binaryTreePaths(vector<string>& result, TreeNode* root, string t){
        if(!root->left && !root->right){ // if left and right nodes do not exist
            result.push_back(t); // add the root to the vector
            return;
        }
        
        // go down left branch
        // if the left node exists
        if(root->left) 
            // recursion
            // vector, root node, string to add to the vector
            binaryTreePaths(result, root->left, t + "->" + to_string(root->left->val));
                            
        // go down the right branch
        // if the right node exists
        if(root->right)
            // recursion 
            // vector, root node, string to add to the vector
            binaryTreePaths(result, root->right, t + "->" + to_string(root->right->val));
        
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result; // vector to hold the result 
        
        if(!root) return result; // if root does not exist
        
        binaryTreePaths(result, root, to_string(root->val));
        
        return result;
    }
};