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
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        int i = 0;
        while (i + 1 < nums.size() - i) { // hard part
            int a = nums[2 * i], b = nums[2 * i + 1]; // calculate values
            while (a--) 
                result.push_back(b); // concatenate part
            i += 1;
        }
        return result;
    }
};


int main() {
    Solution a;

    vector<int> arr;
    for (int i = 0; i < 4; i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    vector<int>arr2 = a.decompressRLElist(arr);
    for (int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << '\n';
    }

    return 0;
}