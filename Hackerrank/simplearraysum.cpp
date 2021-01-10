//		https://www.hackerrank.com/challenges/simple-array-sum/problem
int simpleArraySum(vector<int> ar) {
    return accumulate(ar.begin(), ar.end(), 0);    
}
