#include <iostream>
#define INF 9999
#define SIZE 100
using namespace std;

void show(int a[SIZE][SIZE], int v){
    cout << endl;
    for(int i = 0; i <= v; i++){
        for(int j = 0; j <= v; j++){
            if (a[i][j] == INF) cout << "INF  ";
            else printf("%-3d  ", a[i][j]);
        }
        cout << endl;
    }
}

int main(){
    int v = 4;
    int a[SIZE][SIZE] = {
        {0, 0, 3, INF, 7},
        {0, 8, 0, 2, INF},
        {0, 5, INF, 0, 1},
        {0, 0, 3, INF, 7}
    };
    show(a, 4);
}