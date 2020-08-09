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
void insert(Node** root, int key) {
    if (*root == nullptr) {
        std::cout << "THE ROOT IS NULL" << '\n';
        *root = createNode(key);
        return;
    }
    // assume tree is not empty
    Node* nodeToInsert = createNode(key);
    queue<Node*>q;
    q.push(*root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        // checks LEFT
        if (temp->left == nullptr) {
            temp->left = nodeToInsert;
            return;
        }
        else {
            q.push(temp->left);
        }
        // checks RIGHT
        if (temp->right == nullptr) {
            temp->right = nodeToInsert;
            return;
        }
        else {
            q.push(temp->right);
        }
    }
}
void DFT(Node* root) {
    if (root == nullptr)
        return;
    DFT(root->left);
    std::cout << root->key << ", ";
    DFT(root->right);
}

int main() {
    
    

    return 0;
}
