#include <stdio.h>

int main(void)
{
	int num, step = 1; 	
	int result = 0;

	printf("Write 5 integers one by one : ");
	while(step < 6)
	{
		printf("\n%d.", step);
		scanf("%d", &num);	
		while(num < 0)
		{
			scanf("%d", &num);	
		}
		result += num;
		step++;
	}
	printf("The sum of entire input is %d", result);
	return 0;
}
	
