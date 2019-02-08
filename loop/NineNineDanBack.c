#include <stdio.h>

int main(void)
{
	int dan, num = 9;

	printf("몇 단? : ");
	scanf("%d", &dan);

	while(num >= 1)
	{
		printf("%d x %d = %d\n", dan, num, dan*num);
		num--;
	}	
	return 0;
}
