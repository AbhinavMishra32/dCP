#include "leetcode-definition.h"
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string matching = strs[0];
        for(std::string s : strs) {
            int i = 0;
            while(i < s.size() && i < matching.size()) {
                char a = matching[i];
                char b = s[i];
                if (a != b) { 
                    matching.erase(i, 1);
                    
                }
                i++;
            }
        }
        return matching;
    }
};