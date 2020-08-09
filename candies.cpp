#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maximum = INT_MIN;

        for (int i = 0; i < candies.size(); i++)
            maximum = max(maximum, candies[i]);

        vector<bool> answer;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maximum) {
                answer.push_back(true);
            }
            else {
                answer.push_back(false);
            }
        }

        return answer;
    }
};

int main() {
    
    Solution a;
    
    int n;
    std::cin >> n;

    vector<int> nums;
    for (int i = 0; i < 5; i++) {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    vector<bool> ansArr = a.kidsWithCandies(nums, n);

    for (int i = 0; i < ansArr.size(); i++) {
        std::cout << ansArr[i] << '\n';
    }

    // should print bool's 

    return 0;
}