#include <stdio.h>
#include <math.h>

void SquareByValue(int val);
void SquareByReference(int * val);

int main(void)
{
	int num;
	printf("Write a number: ");
	scanf("%d", &num);
	printf("SquareByValue: ");
	SquareByValue(num);
	printf("SquareByReference: ");
	SquareByReference(&num);
	
	return 0;
}

void SquareByValue(int val)
{
	int res = pow(val,2);
	printf("%d \n", res); 
}

void SquareByReference(int * val)
{
	int res = pow(*val,2);
	printf("%d \n", res); 
}
