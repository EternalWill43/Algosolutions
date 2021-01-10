//		https://www.hackerrank.com/challenges/apple-and-orange/problem
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int c = 0;
    for (int i : apples) if ((i + a) >= s && (i + a) <= t) ++c;
    cout << c << endl;
    c = 0;
    for (int i : oranges) if ((i + b) >= s && (i + b) <= t) ++c;
    cout << c;
}