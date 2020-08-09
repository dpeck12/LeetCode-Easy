// given n-ary tree
// find its maximum depth 

// max depth is no. nodes along longest path, from root to farthest leaf

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == nullptr) return 0; // tree has no nodes 
        
        int depth = 0; // keep track of depth of tree
        
        for(auto child:root->children)
            depth = max(depth, maxDepth(child)); // recursive part. current depth vs depth of node
        return 1 + depth; // +1 includes the root node
        
        // children is a vector that has all the nodes in
        
    }
};