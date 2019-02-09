#include <stdio.h>

int main(void)
{
	int num = 2;
	int index = 1;

	while (1)
	{
		if (num > 8)
			break;
		while (1)
		{
			if (index > num)
				break;
			printf("%d x %d = %d\n", num, index, num*index);
			index++;
		}
		num += 2;
		index = 1;
	}
	return 0;
}
