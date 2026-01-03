#include <vector>

using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int a = digits.at(digits.size() - 1);
    if (a < 10) {
      digits.at(digits.size() - 1) += 1;
    } else {
      digits.pop_back();
      digits.push_back(1);
      digits.push_back(0);
    }
    return digits;
  }
};
