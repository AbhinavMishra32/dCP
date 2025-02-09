class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool> m;
      for(int i =0; i< candies.size(); i++){
        m.push_back((candies[i] + extraCandies >= *max_element(candies.begin(), candies.end())));
      }
return m;
}
};
