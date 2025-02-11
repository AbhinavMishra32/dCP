#include <stdio.h>

int main(){
	int n, a,b;
	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &a, &b);
		if(a>b){
			printf("%d\n", (a-b));
		}
		else{
			printf("%d\n", 0);
		}
	}
}
