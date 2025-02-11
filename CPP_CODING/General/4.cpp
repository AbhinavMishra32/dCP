#include <iostream>
#include <vector>
using namespace std;


int main(){
  std::vector<int> v;
  v.push_back(234);
  v.push_back(123);
  v.push_back(345);
  v.push_back(456);

  for (auto i : v){
    std::cout << i << std::endl;
  }
  cout << "Now printing last element: "<< v.back() << endl;
}
