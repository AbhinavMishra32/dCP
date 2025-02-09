/*12345*/
/*1234*/
/*123*/
/*12*/
/*1*/

#include <stdio.h>

int main(){
    for(int i=5; i>=0; i--){
        for(int k =1; k<=i; k++){
            printf("%d", k);
        }
        printf("\n");
    }
}
