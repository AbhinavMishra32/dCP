class Solution {
  public:
    vector<int> smallerNumbersThanCurrent(vector<int> & nums){
      vector<int> a;
      for(int i=0; i< nums.size(); i++){
        a.push_back(count(nums, i));
      }
      return a;
    }

  int count(vector<int> & vec, int j ){
      int element = vec[j];
      int n=0;
      for(int i =0 ; i< vec.size(); i++){
        if(vec[i] >= element){
          n++;
        }
      }
      return n;
    }
  };
