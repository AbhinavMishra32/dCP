#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int a,b,x;
    cin>>a>>b>>x;
    for(int i =a ; i>1; i--){
      for(int j =b; j>1; j--){
        if(i*j <=x){
          cout<<i<<j<<endl;
        }
      }
    }
  }

}
