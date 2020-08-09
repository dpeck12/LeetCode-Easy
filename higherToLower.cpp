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

string toLowerCase(string str) {
    for (char& c : str)
        if (c >= 'A' && c <= 'Z')
            c += 32;
    return str;
}

int main() {
    string word = "HELLO WORLD";
    std::cout << toLowerCase(word);
    return 0;
}
