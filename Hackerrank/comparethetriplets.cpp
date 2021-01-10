//		https://www.hackerrank.com/challenges/compare-the-triplets/problem
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> v(2,0);
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) ++v[0];
        if (b[i] > a[i]) ++v[1];
    }
    return v;
}
