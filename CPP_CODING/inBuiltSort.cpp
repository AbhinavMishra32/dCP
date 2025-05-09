#include <iostream>

using namespace std;

bool willSwap(pair<int, int> a, pair<int, int> b){
    if (a>b){
        return true;
    }
    return false;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.second != b.second){
        return a.second <b
    }
}

int main(){
    vector<pair<int, int>> marks = {23, 4, 54, 6, 4, 23, 564, 75, 4};
    int n = 5;

    sort(marks.begin(), marks.end(), willSwap);
    for(auto a : marks){
        cout << a.first << ":" << a.second << endl;
    }
}
