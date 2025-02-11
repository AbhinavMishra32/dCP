#include <stdio.h>

void show(int a[], int low, int high){
    for(int i = low; i<=high; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int merge(int a[], int low, int mid, int high){
    int b[8], i, j, k;
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if(a[i] <= a[j]){
            b[k++] = a[i++];
        }
        else {
            b[k++] = a[j++];
        }
    }

    while(i<=mid) {
        b[k++] = a[i++];
    }

    while(j<=high){
        b[k++] = a[j++];
    }
}

int mergeSort(int a[], int low, int high)
{
    while (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main(){
    int a[10] = {3,66,4,9,3,5,63,26,32,25};

    mergeSort(a, 0, 9);
    show(a, 0, 9);
}