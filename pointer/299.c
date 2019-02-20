#include <stdio.h>

int main(void)
{
	int i;
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr[0];

	printf("original------");
        for (i = 0; i < 5; i++)
        {
		printf("%d ", arr[i]);
                printf("%p \n", (ptr+i));
        }

	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	printf("changed------");
	for (i = 0; i < 5; i++)
        {
		printf("%d ", arr[i]);
                printf("%p \n", (ptr+i));
        }
	

	return 0;
}
