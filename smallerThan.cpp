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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller(nums.size(), 0);

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    smaller[i]++;
                }
                else if (nums[i] < nums[j]) {
                    smaller[j]++;
                }
            }
        }
        return smaller;
    }
};

int main() {
    Solution a;

    vector<int> arr;
    for (int i = 0; i < 5;i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }

    vector<int> arr2 = a.smallerNumbersThanCurrent(arr);
    for (int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i]<< '\n';
    }

    return 0;
}