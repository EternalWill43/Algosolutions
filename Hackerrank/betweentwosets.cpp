int getTotalX(vector<int> a, vector<int> b) {
    int c = 0;
    for (int i = a.back(); i <= b.front(); i+=a.back()) {
        bool g = true;
        for (int j : a) if (i % j != 0) g = false;
        for (int j : b) if (j % i != 0) g = false;
        if (g) ++c;
    }
    return c;
}