#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        for (; n > 0; n /= 10) { // Move through the digits
            sum += n % 10;
            product *= n % 10;
        }
        return product - sum;
    }
};

int main() {
    Solution a;

    int n;
    std::cin >> n;
    std::cout << a.subtractProductAndSum(n);

    return 0;
}