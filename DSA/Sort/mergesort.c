#include <stdio.h>

void mergeArrays(int a[], int b[]){
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);
    int c[20] = {0};
    int i,j,k;
    i = j = k = 0;
    while(i<sizea && j<sizeb){
        if (a[i] < b[j]){
            c[k++] = b[j++];
        }
        else {
            c[k++] = a[i++];
        }
    }
    while(i<sizea){

    }
}


int main(){

}