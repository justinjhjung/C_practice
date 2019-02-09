#include <stdio.h>

int main(void)
{
	int a, b;
	int res = 0;

	printf("Write two numbers in an ascending order : ");
	scanf("%d %d", &a, &b);

	while(a < b + 1)
	{
		res += a;
		a++;
	}
	printf("The sum of numbers between the first number and the second is %d", res);
	return 0;
}
			


