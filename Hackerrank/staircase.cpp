void staircase(int n) {
    int iter = 1;
    while (n) {
        for (int i = 1; i < n; i++) cout << " ";
        for (int i = 0; i < iter; i++) cout << "#";
        cout << endl;
        ++iter;
        --n;
    }
}