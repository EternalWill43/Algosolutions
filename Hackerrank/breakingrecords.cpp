//		https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
vector<int> breakingRecords(vector<int> scores) {
    int n = scores[0], m = n;
    vector<int> v(2,0);
    for (int i : scores) {
        if (i > n) {
            ++v[0];
            n = i;
        }
        if (i < m) {
            ++v[1];
            m = i;
        }
    }
    return v;
}
