#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	printf("num1 = %d\nnum2 = %d\n", num1, num2);
	result1 = ((num1++)==num2);	
	printf("result of ((num1++)==num2) : %d\n", result1);
	printf("num1 after getting the first result :%d\n", num1);
	int num1_update = (++num1)+1;
	printf("num1_update = (++num1)+1 : num1_update equals %d\n",num1_update);
	result2 = ((num1_update++)==num2);	
	printf("result of ((num1_update++)==num2) : %d\n", result2);
	printf("num1_update after getting the second result : %d\n", num1_update);
	return 0;
}



