//      https://www.hackerrank.com/challenges/migratory-birds/problem
int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> m;
    int h = 0;
    int num = 0;
    for (int i : arr) {
        m[i]++l;
        if (m[i] > h) {
            h = m[i];
            num = i;
        }
        else if (m[i] == h) {
            h = m[i];
            num = min(i, num);
        }
    }
    return num;
}
