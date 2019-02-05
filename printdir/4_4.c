#include <stdio.h>

int main(void)
{
	int num, result;
	
	printf("Write one number you'd like : ");
	scanf("%d", &num);
	result = ~num + 1;
	printf("Result is %d", result);
	return 0;
}
