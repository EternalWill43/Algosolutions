//      https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
string catAndMouse(int x, int y, int z) {
    int a = abs(z - x), b = abs(z - y);
    if (a == b) return "Mouse C";
    else if (a < b) return "Cat A";
    else return "Cat B";
}
