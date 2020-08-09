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

class Node {
public:
    int data;
    Node* next;
};

int getDecimalValue(Node* head) {
    int s = 0;
    while (head != nullptr) {
        s = s * 2 + head->data;
        head = head->next;
    }
    return s;
}

int main() {
    // Initalize nodes 
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;  

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 0;
    second->next = third;

    third->data = 1;
    third->next = nullptr;

    std::cout << getDecimalValue(head);

    return 0;
}
