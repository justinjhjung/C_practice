#include <stdio.h>

int main(void)
{
	int num = 3;
	int multiple = 8, divisor = 4, result;

	result = (num << 3) >> 2;	
	printf("%d X %d / %d = %d", num, multiple, divisor, result);
        return 0;
}	
