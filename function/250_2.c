#include <stdio.h>
int recursive(int num);

int main(void)
{
	int n, res;
	printf("정수 입력 : ");
	scanf("%d", &n);
	
	printf("2의 %d승은 %d", n, recursive(n));
	return 0;
}

int recursive(int num)
{
	if (num == 0)
		return 1;
	else
		return 2 * recursive(num-1);
}
