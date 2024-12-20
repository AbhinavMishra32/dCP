#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
  void moveZeroes(vector<int>& nums){
    int l =0;
    for(int i =0 ; i<nums.size(); i++){
      if (nums[i] != 0){
        nums[l++] = nums[i];
      }
    }
    
    for(int i = l; i<nums.size(); i++){
      nums[i] = 0;
    }
  }
};


int main(){
  vector<int> nums = {0, 1, 0, 3, 12};

  Solution().moveZeroes(nums);

  for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
  }
}
