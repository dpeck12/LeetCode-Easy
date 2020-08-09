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

Node* search(Node* root, int key) {
    if (root == nullptr) 
        return nullptr;
    queue<Node*> q;
    Node* out = nullptr;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->key == key) { out = temp; std::cout << "HIT" << '\n'; }
        if (temp->left != nullptr) q.push(temp->left);
        if (temp->right != nullptr)q.push(temp->right);
    } 
    return out;
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

void setExremeRightToNULL(Node* root, Node* extremeRight) {
    queue<Node*>q;
    q.push(root);
    Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp->left != nullptr) {
            if (temp->left == extremeRight) {
                std::cout << "FOUND" << '\n';
                temp->left = nullptr;
                return;
            }
            else {
                q.push(temp->left);
            }
            if (temp->right == extremeRight) {
                std::cout << "FOUND" << '\n';
                temp->right = nullptr;
                return;
            }
            else {
                q.push(temp->right);
            }
        }
    }
}

void deleteNode(Node* root, int key) {
    Node* nodeToDelete = search(root, key);
    if (nodeToDelete != nullptr) {

        queue<Node*>q;
        q.push(root);
        Node* temp;
        while (!q.empty()) {
            temp = q.front();
            q.pop();

            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
        int keyAtDeepestRight = temp->key;
        setExremeRightToNULL(root, temp);

        nodeToDelete->key = keyAtDeepestRight;
    }
}

// inorder 
void DFT(Node* root) {
    if (root == nullptr) 
        return;
    DFT(root->left);
    std::cout << root->key << ", ";
    DFT(root->right);
}

int main() {
    Node* root = nullptr;
    for (int i = 1; i <= 7; i++)
        insert(&root, i);

    std::cout << root->key << '\n';
    std::cout << root->left->key << '\n';
    std::cout << root->right->key << '\n';
    std::cout << root->left->left->key << '\n';
    std::cout << root->left->right->key << '\n';
    std::cout << root->right->left->key << '\n';
    std::cout << root->right->left->key << '\n';
    

    /*
    Node* root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->right = createNode(3);
    root->right->left = createNode(5);
    
    Node* node = search(root, 4);
    std::cout << node->key << '\n';
    */
    return 0;
}
