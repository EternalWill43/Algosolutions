//		https://www.hackerrank.com/challenges/diagonal-difference/problem
int diagonalDifference(vector<vector<int>> arr) {
    int l = 0, r = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        l += arr[i][i];
        r += arr[i][arr.size() - (i + 1)];
    }
    return abs(l - r);
}