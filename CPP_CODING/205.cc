#include <string>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
      if (s.size() != t.size()) return false;

      std::string input;
      std::cin >> input;
      // std::unordered_map<std::string, int> um;
      std::unordered_map<int, std::string> um;

      size_t i, j;

      for (i = 0, j = 0; i < s.size() && j < t.size(); i++, j++) {
        if (um.find(s[i]) == um.end()) {
          
        }
      }

      std::unordered_map<std::string, int>::iterator it;
      for (it = um.begin(); it != um.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
      }
      return 0;
    }
};
