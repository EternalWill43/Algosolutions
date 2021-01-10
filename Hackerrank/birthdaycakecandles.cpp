//		https://www.hackerrank.com/challenges/birthday-cake-candles/problem
int birthdayCakeCandles(vector<int> candles) {
    sort(candles.rbegin(), candles.rend());
    int c = 0;
    for (int i = 0; i < candles.size(); ++i) {
        if (candles[i] == candles[0]) ++c;
        else break;
    }
    return c;
}