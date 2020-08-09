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

int distance(int x1, int y1, int x2, int y2) {
    return std::max(std::abs(x2 - x1), std::abs(y2 - y1));
}

// ++i, increment then return the incremented
// i++, increment but return orginal

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int res = 0;
    for (int i = 0; i < points.size()-1; i++) {
        res += distance(points[i][0],points[i][1],points[i+1][0],points[i+1][1]);
    }
    return res;
}

int main() {
    vector<vector<int>> arr;
    arr = { {1,1}, {3,4}, {-1,0} };
    std::cout << minTimeToVisitAllPoints(arr) << '\n';

    return 0;
}
