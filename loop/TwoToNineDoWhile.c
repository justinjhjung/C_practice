#include <stdio.h>

int main(void)
{
	int dan = 2, num = 1;

	
	do
	{	
		do
		{
			printf("%d x %d = %d\n", dan, num, dan*num);
			num++;
		}while(num < 10);

		dan++;
		num = 1;
	}while(dan < 10);

	return 0;
}
