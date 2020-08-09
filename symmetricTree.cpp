// given a binary tree, check whether it is a mirror of itself
// symmetric around its center

// [1,2,2,3,4,4,3] is symmetric
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
    bool isSymmetric(TreeNode* root) {
        TreeNode *left, *right; // Pointers to the left and right node
        
        // check if the root node equals 0, if so tree is symmetric 
        if(!root)
            return true;
        
        queue<TreeNode*> q1, q2; // queues, to hold the left and right branches
        
        q1.push(root->left); // push the left node onto the left queue
        q2.push(root->right); // push the right node onto the right queue
        
        // while q1 and q2 are not empty
        while(!q1.empty() && !q2.empty()){
            left = q1.front(); // assign front element in left queue
            q1.pop(); // pop the front element from the left queue
            
            right = q2.front(); // assign front element in right queue
            q2.pop(); // pop the front element from the right queue
            
            // if left AND right node is equal to NULL, then symmetric
            if(NULL == left && NULL == right)
                continue;
            
            // if left OR right node is equal to NULL, then NOT symmetric
            if(NULL == left || NULL == right)
                return false;
            
            // if left and right value are not equal, then NOT symmetric
            if(left->val != right->val)
                return false;
            
            // outter then inner
            q1.push(left->left);
            q1.push(left->right);
            
            // outter then inner
            q1.push(right->right);
            q1.push(right->left);
        }
        return true;
    }
};