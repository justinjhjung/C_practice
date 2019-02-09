#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 9;
	int sum;

	while (1)
	{
		if (num1 > 9)
			break;
		while (1)
		{
			sum = num1 + num2;
			if (sum > 9)
				break;
			else if (sum == 9)
			{
				printf("Possible combination of A, Z : %d, %d\n", num1, num2);
				break;
			}
			else
			{
				num2++;
			}
		}
		num1++;	
		num2 = 0;
	}	
	return 0;
}
