#include <stdio.h>

int main(){
  int a[6] = {2,4,7,9,11,13};
  int b[8] = {1,3,6,8,10,12,14,15};
  int c[20];

  int sizea = sizeof(a)/sizeof(a[0]);
  int sizeb = sizeof(b)/sizeof(b[0]);

  int i,j=0;
  for(i=0; i< sizea && i<sizeb; i++){
    if(a[i] >=b[i]){
      c[j++] = b[i];
      c[j++] = a[i];
    }
    else {
      c[j++] = a[i];
      c[j++] = b[i];
    }
  }

  while(i<sizea){
    c[j++] = a[i++];
  }
  while(i<sizeb){
    c[j++] = b[i++];
  }

  printf("Combined array: \n");
  for(int i=0; i<j; i++){
    printf("%d ", c[i]);
  }
  printf("\n");
}
