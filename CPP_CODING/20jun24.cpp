#include <iostream>
using namespace std;

void recurN(int n){
  cout << n;
  if (n ==1)
    return;
  recurN(n-1);
}


int main(){
  recurN(5);
}
