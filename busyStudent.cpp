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

/*
vector<int> startTime;
vector<int> endTime;

int queryTime;

ith student
Start Time = startTime[i]
End Time = endTime[i]

Number of students doing work at query time
*/

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int count = 0;
    for (int i = 0; i< startTime.size(); i++) {
        if (startTime[i] <= queryTime && queryTime <= endTime[i])
            count++;
    }
    return count;
}

int main() {
    vector<int>arr1;
    vector<int>arr2;
    arr1 = { 1,2,3 };
    arr2 = { 3,2,7 };
    int query = 4;

    std::cout << busyStudent(arr1, arr2, query);


    return 0;
}

