#include <iostream>
#include <string>

int main(){
  std::string str = "Hello";

  std::cout<<str<<std::endl;
  std::string str2(str.rbegin(), str.rend());
  std::cout<<str2<<std::endl;
}
