#include <stdio.h>

int main(void)
{
	int from, to, temp;
	int idx1, idx2 = 1;

	printf("Write down two numbers that are the lower and upper bound for multiplication rule: ");
	scanf("%d %d", &from, &to);

	if (from > to)
	{
		temp = to;
		to = from;
		from = temp;
	}

	for (idx1 = from; idx1 <= to; idx1++) 
	{
		while (idx2 < 10)
		{
			printf("%d x %d = %d\n", idx1, idx2, idx1*idx2);
			idx2++;
		}	
		idx2 = 1;
	}
	return 0;
	
}
