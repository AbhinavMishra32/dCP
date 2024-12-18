#include <string>
#include <iostream>
#include <vector>

int main(){
  std::string s;
  int k;
  getline(std::cin, s);
  std::vector<int> c;
  for(int i =0; i< 3; ++i){
    std::cin>> c[i];
  }

  for(int i =0; i<3; ++i){
    std::cout << c[i];
  }
}
