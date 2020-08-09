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

int maxProduct(vector<int>& nums) {
    auto m1 = 0, m2 = 0;
    for (auto n : nums) {
        if (n > m1)
            m2 = exchange(m1, n);
        else
            m2 = max(m2, n);
    }
    return (m1 - 1) * (m2 - 1);
}

int main() {
    // 3, 4, 5, 2
    vector<int>arr;
    arr = {3,4,5,2};
    std::cout << maxProduct(arr);
    return 0;
}
/*
EXCHANGE
Replaces the value of
obj with new_valueand
returns the old value of obj.

3 4 5 2
m1 = 0, m2 = 0

m1 = 3
m2 = 0

m1 = 4
m2 = 3

m1 = 5
m2 = 4

m2 = 4
m1 = 5

3 * 4 = 12
*/
