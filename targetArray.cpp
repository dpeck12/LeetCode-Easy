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
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for (int i = 0; i < index.size(); i++) {
            result.insert(result.begin() + index[i], nums[i]);
        }
        return result;
    }
};  

int main() {
    //Vector, insert(position, val)
    Solution a;

    vector<int>arr1;
    vector<int>arr2;

    for (int i = 0; i < 5; i++) {
        int x;
        std::cin >> x;
        arr1.push_back(x);
    }
    std::cout << "------------------------" << '\n';
    for (int i = 0; i < 5; i++) {
        int x;
        std::cin >> x;
        arr2.push_back(x);
    }
    std::cout << "------------------------" << '\n';

    vector<int>arr3 = a.createTargetArray(arr1, arr2);
    for (int i = 0; i < arr3.size(); i++) {
        std::cout << arr3[i] << '\n';
    }

    return 0;
}