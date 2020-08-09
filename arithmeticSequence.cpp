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

// reference to the array, &arr
bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    
    int diff = arr[1] - arr[0];
    if (arr.size() == 2) // assumed elements are distinct
        return true;
    // Dealt with first two elements
    for (int i = 2; i < arr.size(); i++) {
        if ((arr[i] - arr[i - 1]) != diff)
            return false;
    }
    return true;
}

int main() {
    vector<int> arr;
    arr = { 3,5,1 };


    return 0;
}
