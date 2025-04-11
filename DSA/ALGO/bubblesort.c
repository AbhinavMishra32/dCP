#include <stdio.h>

void swap(int* a, int* b){
    int c = *a;
    *a = b;
    *b = c;
}

void bubbleSort(int a[], int size) {
    for(int i = 0; i< size - 1; i++) {
        for(int j = i; j < size-i-1; j++){
            if (a[j+1] < a[j]) {
                swap(a[j+1], a[j]);
            }
        }
    }
}
