#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>

using namespace std;

// BINARY SEARCH TREE
// node-based binary tree data structure
// Left subtree of a node contains only nodes with 
// keys lesser than the node's key
// Right subtree of a node contains only nodes with
// keys greater than the node's key
// Left and right subtree each must also be a binary search tree

// Implementing TreeNode struct 
struct TreeNode
{
    // members
    int data; // stores nodes value 
    TreeNode* left; // pointer to left child node, is also a TreeNode
    TreeNode* right; // pointer to right child node, is also a TreeNode

    // constructor 
    // build new TreeNode by providing single int value 
    // sets left and right to nullptrs 
    TreeNode(int data) :data(data), left(nullptr), right(nullptr) {}
};

int main() {

    return 0;
}