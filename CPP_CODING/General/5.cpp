#include <iostream>

using namespace std;

void rsum(int n, int currsum, int sum){
  if (currsum + n < sum){
    cout << n << " + ";
    rsum(n+1, currsum + n, sum);
  } else {
    cout << endl;
    return;
  }
}

int main(){
  rsum(0, 0, 100);
}
