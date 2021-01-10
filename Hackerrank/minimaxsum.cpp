//		https://www.hackerrank.com/challenges/mini-max-sum/problem
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long num = accumulate(arr.begin(), arr.end() - 1, (long long)0);
    cout << num << " " << num + arr[arr.size()-1] - arr[0];
}