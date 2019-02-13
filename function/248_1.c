#include <stdio.h>

int main(void)
{
	int num;
	printf("Write one number: ");
	scanf("%d", &num);
	printf("Transformed number under hexadecimal: %x", num);
	return 0;
}
