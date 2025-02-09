#include <stdio.h>

int main()
{
	printf("HELLO \n");
	int y = 256;
	int *x = &y;
	printf("%p", x);
}
