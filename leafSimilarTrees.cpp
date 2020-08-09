// consider all leaves of a binary tree
// from left to right,
// the values of those leaves form a leaf value sequence
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
    
    int dfs(stack<TreeNode*>& s){ // pointer to the stack
        while(true){
            TreeNode* node = s.top(); // assign first element of the stack
            s.pop(); // get rid of first element of the stack
            
            if(node->right) // if the right (sub)node exists
                s.push(node->right); // push the right node onto the stack
            
            if(node->left) // if the left (sub)node exists
                s.push(node->left); // push the left node onto the stack
            
            if(!node->left && !node->right) // if l/r (sub)node do not exist (have reached the end)
                return node->val; // return the value of the node
            
        }
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1, s2;
        
        s1.push(root1); // push first root onto the stack
        s2.push(root2); // push second root onto the stack
        
        // while stack 1 and 2 are NOT empty
        while(!s1.empty() && !s2.empty())
            // depth first search on each tree
            // check if trees leaf value sequence are equal
            if(dfs(s1) != dfs(s2))
                return false;
        
        // all emlemets of the stack have been popped off
        return s1.empty() && s2.empty();
    }
};