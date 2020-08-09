// given two binary trees
// check if they are the same or not 
// same = structurally identical and nodes have the same value 

/*
Algo for recursion:

1) if one of the nodes is NULL, then return quality result of p and q
e.g. both are null return true, otherwise false

2) TRUE, if root nodes have same value
and left tree of roots are same (recursion)
and right tree of roots are same (recursion)

otherwise return false
*/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return (p==q);
        
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};