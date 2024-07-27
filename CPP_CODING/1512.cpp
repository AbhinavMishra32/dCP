class Solution {
  public:
    int numIdenticalPairs(vectors<int> & nums){
      int count = ;
      for (int i = 0; i< nums.size(); i++){
        for(int j = i+1; j< nums.size(); j++){
          if(nums[i] == nums[j]){
            count++;
          }
        }
      }
      return count;
    }
}
