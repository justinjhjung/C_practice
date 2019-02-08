#include <stdio.h>

int main(void)
{
	int dan = 2, num = 1;

	
	while(dan < 10)
	{	
		while(num < 10)
		{
			printf("%d x %d = %d\n", dan, num, dan*num);
			num++;
		}
		dan++;
		num = 1;
	}
	return 0;
}
