//      https://www.hackerrank.com/challenges/electronics-shop/problem
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max = -1;
    for (int i : keyboards) {
        for (int j : drives) {
            int total = i + j;
            if (total <= b && total > max) max = total;
        }
    }
    return max;
}
