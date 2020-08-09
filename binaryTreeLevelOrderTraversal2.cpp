// given a binary tree
// return bottom-up level order traversal of it's nodes' values
// from left to right, level by level, from leaf to root

// same as level order traversal, reverse final container for output 

// pass in current node and its level
// if this level does not yet exist in output container,
// then add a new empty level
// add current node to the end of the current level
// recursively call the function passing two children
// of the current node at the next level.

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
    vector<vector<int>> res;
    
    void DFS(TreeNode* root, int level){
        if(root == NULL)
            return;
        
        if(level == res.size()){
            // INTERESTING: create vector inside a vector 
            res.push_back(vector<int>()); // create a new level
        }
        
        // level starts at 0, and increases
        // first level has index 0
        res[level].push_back(root->val); // add the current value to its level
        
        // RECURSIVE:
        // left branch
        DFS(root->left, level+1); // go to the next level
        // right branch
        DFS(root->right, level+1); // go to the next level
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        DFS(root, 0); // 0 = initial level
        
        // reverse the order of the vector
        return vector<vector<int>> (res.rbegin(), res.rend());
    }
};