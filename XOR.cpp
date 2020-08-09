#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int res = start;
        for (int i = 1; i < n; i++) {
            res = res ^ (start + 2 * i);
        }
        return res;
    }
};

int main() {
    Solution a;

    int x;
    int y;
    std::cin >> x >> y;

    std::cout << a.xorOperation(x, y);

    return 0;
}