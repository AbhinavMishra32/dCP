/*#include <bits/stdc++.h>*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
	int n;
	cin>>n;
	while(n--){
		int s;
		cin>>s;
		int r=0;
		vector<int> a, b;
		for(int i=0; i< s; i++){
			int e;
			cin>>e;
			a.push_back(e);
		}
		for(int i=0; i< s; i++){
			int e;
			cin>>e;
			b.push_back(e);
		}
		for(int i=0; i< s; i++){
			if (a[i]==b[i]){
				r++;
			}
		}
		cout<<r<<endl;
	}
}
