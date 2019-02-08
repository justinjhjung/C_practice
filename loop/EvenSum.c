#include <stdio.h>

int main(void)
{
	int num = 2, res = 0;
	while (num < 101)
	{
		res += num;
		num += 2;
	}
	printf("Result is %d", res);
	return 0;
}
