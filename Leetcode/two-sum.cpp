//      https://leetcode.com/problems/two-sum/

#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> s;
    vector<int> res;

    for (int i = 0; i < nums.size(); i++) {
      int data = target - nums[i];
      auto it = s.find(data);
      if (it != s.end()) {
        res.push_back(i);
        res.push_back(it->second);
        return res;
      }
      s.insert({nums[i], i});
    }
    return res;
  }
};