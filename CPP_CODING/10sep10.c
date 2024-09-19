#include <stdio.h>

int main(){
	int n,a;
	scanf("%d", &n);

	while(n--){
		scanf("%d", &a);
		if(isdigit(a)){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
}
