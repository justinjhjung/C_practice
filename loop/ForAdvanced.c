#include <stdio.h>

int main(void)
{
	int a, b;
	int res = 0;

	printf("Write two numbers in an ascending order : ");
	scanf("%d %d", &a, &b);

	for(int num = a; num < b + 1; num++)
	{
		res += num;
	}
	printf("The sum of numbers between the first number and the second is %d", res);
	return 0;
}
			
