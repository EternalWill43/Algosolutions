//		https://www.hackerrank.com/challenges/the-birthday-bar/problem
int birthday(vector<int> s, int d, int m) {
    int c = 0;
    for (int i = 0; i <= s.size() - m; i++) {
        int sum = 0;
        for (int j = i; j < (i + m); j++) sum+=s[j];
        if (sum == d) ++c;
    }
    return c;
}