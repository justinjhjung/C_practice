#include <stdio.h>

int main(void)
{
	int arr[5];
	int max, min, sum, i;
	
	for (i=0; i<5; i++)
	{
		printf("Write integers: ");
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i=1; i<5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("max value : %d\n min value : %d\n sum : %d", max, min, sum);
	return 0;
}


