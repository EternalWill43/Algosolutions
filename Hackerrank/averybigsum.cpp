//		https://www.hackerrank.com/challenges/a-very-big-sum/problem
long aVeryBigSum(vector<long> ar) {
    return accumulate(ar.begin(), ar.end(), (long long)0);
}