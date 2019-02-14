#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool pnum_check(int num);

int main(void)
{
	int index = 1;
	int num = 2;

	while (index < 11)
	{
		if (pnum_check(num))	
		{
			printf("%d ",num);
			index++;
		}
		num++;
	}
	return 0;
}

bool pnum_check(int num)
{
	int max = pow(num, 0.5);
	int idx;

	for (idx = 2; idx <= max; idx++)
	{
		if (num % idx == 0)
			return false;
		else
			continue;
	}
	return true;
}
