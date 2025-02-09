#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> ss;
        for(int i =0; i<s.length(); i++){
            char el = s[i];
            switch(el){
                case ']':
                    ss.push(s[i+1])
            }
        }
    }
};