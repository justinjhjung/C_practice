#include <stdio.h>

int main(void)
{
	int num1, num2;
	num1=10, num2=20;
	
	int result=num1+num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, result);
	return 0;
}
