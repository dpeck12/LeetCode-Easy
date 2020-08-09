#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;
    }
};

int main() {
    
    Solution a;
    
    vector<int> nums;
    for (int i = 0; i < 4; i++) {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    a.runningSum(nums);

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << '\n';
    }

    return 0;
}