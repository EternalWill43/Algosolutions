//      https://www.hackerrank.com/challenges/counting-valleys/problem
int countingValleys(int steps, string path) {
    int l = 0;
    int acc = 0;
    for (char c : path) {
        if (c == 'U') ++l;
        else --l;
        if (l == 0 && c == 'U') ++acc;
    }
    return acc;
}
