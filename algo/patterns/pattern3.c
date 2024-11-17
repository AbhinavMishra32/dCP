//    1
//   12
//  123
// 1234

#include <stdio.h>

int main(){
    for(int i=1; i<=4; i++){
        for(int j=0; j<4-i; j++){
            printf(" ");
        }
        for(int k =1; k<=i; k++){
            printf("%d", k);
        }
        printf("\n");
    }
}
