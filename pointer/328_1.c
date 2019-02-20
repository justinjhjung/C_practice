#include <stdio.h>
void Odd(int array[], int len);
void Even(int array[], int len);

int main(void)
{
	int i, arr[10];
	printf("Write down 10 numbers in a row: ");
	
	for (i=0; i<10; i++)
		scanf("%d", &arr[i]);

	Odd(arr, 10);
	Even(arr, 10);	
	return 0;
}

void Odd(int array[], int len)
{
	int i;
	printf("홀수 출력: ");
	for (i=0; i<len; i++)
	{
		if (array[i] % 2 != 0)
			printf("%d ", array[i]);
	}
}

void Even(int array[], int len)
{
	int i;
	printf("\n짝수 출력: ");
	for (i=0; i<len; i++)
	{
		if (array[i] % 2 == 0)
			printf("%d ", array[i]);
	}
}
				
