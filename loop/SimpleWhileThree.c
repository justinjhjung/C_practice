#include <stdio.h>

int main(void)
{
	int input, num = 1;

	printf("양의 정수 1개를 입력하시오 :");
	scanf("%d", &input);
	
	while( num <= input)
	{
		printf("%d \n", 3 * num);
		num++;
	}
	return 0;
}
