#include <stdio.h>

int main(void)
{
	int num, res = 1;

	printf("Write down one number to get factorial : ");
	scanf("%d", &num);
	for ( ; num > 0 ; num--)
	{
		res *= num;
	}
	printf("The result is %d", res);
	return 0;
}

