#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>

using namespace std;    

struct TreeNode 
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) :data(data), left(nullptr), right(nullptr) {}

};


int main() {
    TreeNode root(5);
    TreeNode leftChild(4);
    TreeNode rightChild(6);
    
    root.left = &leftChild;
    root.right = &rightChild;

    std::cout << "Initial node: " << root.data << '\n';
    std::cout << "Left node: " << root.left->data << '\n';
    std::cout << "Right node: " << root.right->data << '\n';
    
    return 0;
}