#include <stdio.h>

int main(void)
{
	int i, arr[10], res[10];
	int odd = 0;
	printf("Write down 10 numbers in a row: ");
	
	for (i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 != 0)
			odd += 1;
	}
	
	int * fptr = &res[0];
	int * bptr = &res[9];

	for (i=0; i<10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			*fptr = arr[i];
			fptr++;
		}
		else
		{
			*bptr = arr[i];
			bptr--;
		}
	}
	printf("배열 요소의 출력: ");
	for (i=0; i<10; i++)
		printf("%d ", res[i]);
	return 0;
}


