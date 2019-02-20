#include <stdio.h>

int main(void)
{
	int i, res = 0;
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr[4];
	
	for (i = 0; i < 5; i++)
		res += *(ptr-i);

	printf("The total sum of the entire array is %d", res);

	return 0;
}
