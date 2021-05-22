//      https://www.hackerrank.com/challenges/sock-merchant/problem
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> m;
    int c = 0;
    for (int i : ar) {
        m[i]++;
        if (m[i] == 2) {
            ++c;
            m[i] = 0;
        }
    }
    return c;
}
