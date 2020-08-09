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
    TreeNode foo(5);

    std::cout << "data: " << foo.data << '\n';
    std::cout << "left: " << foo.left << '\n';
    std::cout << "right: " << foo.right << '\n';

    return 0;
}