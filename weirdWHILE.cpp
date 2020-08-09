#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>
#include <iterator>
#include <unordered_set>

using namespace std;

int main() {

    int i = 0;
    // i+1 moving up the list
    // 4-i also making the list smaller 
    while (i + 1 < 4 - i) { // hard part
        std::cout << i << '\n';
        i += 1;
    }

    return 0;
}