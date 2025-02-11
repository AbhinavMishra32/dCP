// *****
// *   *
// *   *
// *   *
// *****

#include <stdio.h>

int main(){
    int n = 15;
    for(int i =1; i<=n; i++){
        if(i==n || i ==1){
            for(int j =0; j<n; j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j =1; j<=n; j++){
                if(j ==n || j == 1){
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }
    }
}
