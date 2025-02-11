class Solution {
  public: 
    vector<int> findWordsContaining(vector<string>& words, char x){
      vector<int> a;
      for(int i =0; i< words.size(); i++){
        string word = words[i];
        for(int j =0; j< word.length(); j++){
          char letter = word[j];
          if(letter==x){
            a.push_back(i);
            break;
          }
        }
      }
      return a;
    }
};
