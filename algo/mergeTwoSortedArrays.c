#include <stdio.h>

int main(){
    int a[6] = {2,4,6,9,13,16};
    int b[9] = {3,5,7,11,15,19,22,23,27};
    int c[20];
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);

    printf("Size of a: %d\n", sizea);
    printf("Size of b: %d\n", sizeb);

    int j=0;
    if(sizeb>=sizea){
        int i;
        for(i=0;i<sizea;i++){
            if(a[i] >= b[i]){
                c[j] = b[i];
                c[j+1] = a[i];
                j+=2;
            }
            else{
                c[j] = a[i];
                c[j+1] = b[i];
                j+=2;
            }
        }
        for(int k = i; k<sizeb; k++){
            c[j++]=b[k];
        }
    }
    else{
        int i;
        for(i =0; i<sizea; i++){
            if(a[i] >= b[i]){
                c[j] = b[i];
                c[j+1] = a[i];
                j+=2;
            }
            else{
                c[j] = a[i];
                c[j+1]= b[i];
                j +=2;
            }
        }
        for(int k =i;k<sizea; k++){
            c[j++] = b[k];
        }
    }

    //printing the combined array
    printf("Combined Array: \n");
    for(int i=0; i<j; i++){
        printf("%d ", c[i]);
    }
}
