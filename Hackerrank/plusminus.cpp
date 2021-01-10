void plusMinus(vector<int> arr) {
    double p = 0, n = 0, z = 0;
    for (int i : arr) {
        if (i > 0) ++p;
        if (i < 0) ++n;
        if (i == 0) ++z;
    }
    cout << p / arr.size() << endl;
    cout << n / arr.size() << endl;
    cout << z / arr.size() << endl;
}