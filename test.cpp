// unique paths in a grid
// https://leetcode.com/problems/unique-paths/

#include <iostream>
#include <vector>
#include <algorithm>

using namspace std;

int unique_path(int m, int n) {
    if (m == 0 || n == 0) {
        return 0;
    }
    if (m == 1 || n == 1) {
        return 1;
    }
    return unique_path(m - 1, n) + unique_path(m, n - 1);
}

int main() {
    int m = 3, n = 2;
    cout << unique_path(m, n) << endl;
    return 0;
}