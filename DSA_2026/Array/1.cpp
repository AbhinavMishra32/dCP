#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      if (mp.find(target - nums[i]) != mp.end()) {
        return vector<int>{i, mp.at(target - nums[i])};
      } else {
        mp.insert({nums[i], i});
      }
    }
    return vector<int>{};
  }
};
