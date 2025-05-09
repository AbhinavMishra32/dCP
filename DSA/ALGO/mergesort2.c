#include <stdio.h>


void merge(int a[], int l, int mid, int h) {
    int i, j, k;
    i = l; j = mid + 1; k = l;
    int b[h+1];

    while(i <= mid && j <= h) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }
    while(i <= mid) {
        b[k++] = a[i++];
    }
    
    while(j <= h) {
        b[k++] = a[j++];
    }

    for(int x = l; x <= h; x++){
        a[x] = b[x];
    }
}

int main(){
    int a[] = {5, 7, 3, 5, 9, 23, 75 , 26};
    merge(a, 0, 3, 7);

    printf("Merged:\n");
    for(int i =0 ; i<8; i++){
        printf("%d\n", a[i]);
    }
}
