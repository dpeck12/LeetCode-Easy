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
    int numJewelsInStones(string J, string S) {
        int res = 0;


        unordered_set<char> setJ(J.begin(), J.end());
        for (char s : S)
            // Number of occurences of an element in a given range
            if (setJ.count(s))
                res++;
        return res;
    }
};

int main() {
    Solution a;

    string J, S;
    std::cin >> J >> S;

    std::cout << a.numJewelsInStones(J, S);

    return 0;
}