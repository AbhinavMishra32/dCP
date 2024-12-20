#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
  std::vector<int> v = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9};

  std::unordered_set<int> s(v.begin(), v.end());
  int key = 40;

  std::vector<int>::iterator it;

  for(it = v.begin(); it != v.end(); ++it){
    std::cout << *it << " ";
  }
   // print the set:
  std::cout<<std::endl;
  for (auto it = s.begin(); it != s.end(); ++it) {
    std::cout << *it << " ";
  }


}
