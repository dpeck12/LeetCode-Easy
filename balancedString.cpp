#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>

using namespace std;
// Increment bal when we see 'L', decrement when see 'R'
// split when bal ==0, e.g. register a balanced string 

class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0, result = 0;
        for (auto character : s) {
            balance += character == 'L' ? 1 : -1;
            if (balance == 0) ++result;
        }
        return result;
    }
};

int main() {
    Solution a;

    string x;
    std::cin >> x;
    std::cout << a.balancedStringSplit(x);

    return 0;
}