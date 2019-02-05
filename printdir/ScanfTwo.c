#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;
	
	printf("Three numbers in a row : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	result = num1 * num2 + num3;
	printf("%dX%d+%d=%d", num1, num2, num3, result);
	return 0;
}	

	
