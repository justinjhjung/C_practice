#include <stdio.h>

int main(void)
{
	int input, result = 0;

	while (input != 0)
	{
		printf("양의 정수 1개를 입력하시오 :");
		scanf("%d", &input);
		result += input;	
	}
	printf("The sum of all the number you put : %d", result);
	return 0;
}
