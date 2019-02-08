#include <stdio.h>

int main(void)
{
	int num, input, index = 0; 
	double result = 0;
	
	printf("몇 개의 정수를 입력하겠습니까?");
	scanf("%d", &num);
	
	while (index < num)
	{
		printf("양의 정수 1개를 입력하시오 :");
		scanf("%d", &input);
		result += input;	
		index++;
	}
	printf("The mean of all the number you put : %f", result/num);
	return 0;
}
