#include <stdio.h>



void printArr(int arr[], int n);
void scanArr(int arr[], int k);
int main(){
    // int a[10] = {1,2,3,4,5};
    // int k[10] = {5};
    // // scanArr(a, 5);
    // printArr(k, 10);
    int a = 10;
    printf("%d \n", a);
    printf("&a=%p \n", &a);
}
void printArr(int arr[], int n){
    printf("Printing array:\n");
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void scanArr(int arr[], int k){
    for(int i =0; i<k; i++){
        scanf("%d", &arr[i]);
    }
}