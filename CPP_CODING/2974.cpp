class Solution {
  public:
    int returnMinIndex(vector<int> & arr){
      int min = 0;
      for(int i= 1; i<arr.size(); i++){
        if (arr[i]< arr[min]){
          /* arr.erase(arr.begin() + i); */
          min = i;
        }
      }
      return min;
    }

    vector<int> numberGame(vector<int> &nums){
      vector<int> a;
      for(int i =0; i<nums.size(); i++){
      int aliceI = returnMinIndex(nums);
      int aliceE = nums[returnMinIndex(nums)];
      nums.erase(nums.begin() + aliceI);

      int bobI = returnMinIndex(nums);
      int aliceE = nums[returnMinIndex(nums)];
      nums.erase(nums.begin() + bobI);

      a.push_back(bobE);
      a.push_back(aliceE);
      }

      /* a.push_back(nums[returnMinIndex]); */

    }
};
