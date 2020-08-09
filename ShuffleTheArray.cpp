#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2 * n);

        for (int i = 0, j = 0; i < n; i++) {
            ans[j++] = nums[i];
            ans[j++] = nums[i + n]; // add n to get second half of list 
        }
        return ans;
    }
};

int main() {
    
    Solution a;
    
    int n;
    std::cin >> n;

    vector<int> nums;
    for (int i = 0; i < (2*n); i++) {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    vector<int> ansArr = a.shuffle(nums, n);

    for (int i = 0; i < ansArr.size(); i++) {
        std::cout << ansArr[i] << '\n';
    }



    return 0;
}