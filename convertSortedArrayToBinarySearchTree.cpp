// given sorted array (ascending order)
// convert array to height balanced BST

// Height-balanced binary tree:
// binary tree in which the depth of the two subtrees of every node
// never differ by more than 1 

/*
EXAMPLE: [-10, -3, 0, 5, 9]
[0, -3, 9, -10, null, 5]

             0
            / \
          -3   9
         /    /
       -10   5
*/

// input is a vector of numbers 

int maxDepth(TreeNode *root)
{
    return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}