#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>
#include <queue>



using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* createNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// inorder 
void DFT(Node* root) {
    if (root == nullptr)
        return;
    DFT(root->left);
    std::cout << root->key << ", ";
    DFT(root->right);
}

// rangeSumBST
int rangeSumBST(Node* root, int L, int R) {
    if (!root) return 0; // checks if root node exists 

    if (root->key >= L && root->key <= R) {
        // root + left branch + right branch 
        return root->key + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
    //internal nodes each store a key greater 
    //than all the keys in the node's left subtree 
    //and less than those in its right subtree.
    else if (root->key < L)
        // if root is less than left, search right subtree
        return rangeSumBST(root->right, L, R);
    else
        // if root is less than right, search right subtree
        return rangeSumBST(root->left, L, R);
}

int main() {
    // 10,5,15,3,7,null,18

    Node* root = createNode(10);
    root->left = createNode(5);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right = createNode(15);
    root->right->right = createNode(18);

   std::cout<< rangeSumBST(root, 7, 15);

    return 0;
}
