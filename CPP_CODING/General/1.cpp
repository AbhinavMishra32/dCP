#include <iostream>
#include <vector>
#define REP(i,a,b) for (int i =a; i<b; i++)
using namespace std;

int main(){
/* REP(i, 0, 10){ */
/*   cout << i<< endl; */
/* } */
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);


  for( auto x : a){
    cout <<x <<endl;
  }
}
