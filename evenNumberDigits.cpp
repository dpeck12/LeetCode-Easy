#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>
#include <cmath>

using namespace std;
// log base 10 of a number gives the number of digits - 1
// want an even number of digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto const num : nums) {
            if (((int(log10(num) + 1)) % 2) == 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution a;

    vector<int> arr;
    for (int i = 0; i < 5; i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    std::cout << "OUTPUT: " << a.findNumbers(arr);

    return 0;
}