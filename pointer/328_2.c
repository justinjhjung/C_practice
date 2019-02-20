#include <stdio.h>
#include <math.h>
int Length(int num);

int main(void)
{
	int i=0, temp, in;

	printf("Write a number to convert in decimal: ");
	scanf("%d", &in);

	int len = Length(in);
	int arr[len];

	while (in != 0)
	{
		temp = in;
		in /= 2;
		arr[len-(i+1)] = temp % 2;
		//printf("나머지: %d \n", arr[-(i+1)]);  
		i++;
	}
	
	for (i=0; i<len; i++)
		printf("%d", arr[i]);
	return 0;
}

int Length(int num)
{
	int len = 0;
	while (num > pow(2,len))
		len++;
	return len;
}	
