#include <stdio.h>
void Fibonacci(int num);

int main(void)
{
	int num;
	printf("How many numbers in Fibonacci you want to see from the very first?: ");
	scanf("%d", &num);
	
	Fibonacci(num);
	return 0;
}

void Fibonacci(int num)
{
	int first = 0, second = 1, temp;
	int index = 2;

	printf("%d, ",first);
	printf("%d, ",second);

	while (index < num)
	{
		temp = first + second;
		printf("%d, ",temp);
		index++;
		first = second; 
		second = temp;
	}
}

		

