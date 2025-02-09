#include <stdio.h>

int A[10] = {6,7,8,5,3,9,2,1,35,76};
void swap(int *a, int *b);

int partition(int l, int h){
    int pivot = A[l];
    int i = l, j = h;
    
    while(i < j){
        while(A[i] <= pivot && i < h) i++;
        while(A[j] > pivot && j > l) j--;
        if(i < j) swap(&A[i], &A[j]);
    }
    swap(&A[l], &A[j]);
    return j;
}
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void quicksort(int l, int h) {
    if (l<h) {
        int j = partition(l, h);
        quicksort(l, j);
        quicksort(j+1, h);
    }
}

int main(){
    quicksort(0, 9);
    for(int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}