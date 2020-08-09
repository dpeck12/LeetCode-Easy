#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        
        return regex_replace(address, regex("[.]"), "[.]");

    }
};

int main() {
    Solution a;

    string ip;
    std::cin >> ip;

    std::cout << a.defangIPaddr(ip);


    return 0;
}