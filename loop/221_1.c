#include <stdio.h>
int Max(int num1, int num2, int num3);
int Min(int num1, int num2, int num3);

int main(void)
{
	int num1, num2, num3;
	int max, min;
	printf("세 개 정수를 입력하시오. \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	max = Max(num1, num2, num3);
	min = Min(num1, num2, num3);
	printf("max : %d, min : %d", max, min);
	return 0;
}

int Max(int num1, int num2, int num3)
{
	if (num1 > num2) 
		if (num2 > num3)		
			return num1;
		else
			if (num1 > num3)
				return num1;
			else
				return num3;
	else
		if (num1 > num3)		
			return num2;
		else
			if (num2 > num3)
				return num2;
			else
				return num3;
}

int Min(int num1, int num2, int num3)
{
	if (num1 > num2) 
		if (num2 > num3)		
			return num3;
		else
			if (num1 > num3)
				return num2;
			else
				return num2;
	else
		if (num1 > num3)	
			return num3;
		else
			if (num2 > num3)
				return num1;
			else
				return num2;
}




