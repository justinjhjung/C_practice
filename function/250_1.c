#include <stdio.h>

int main(void)
{
	int k = 0, exp = 1;
	int n;
	printf("상수 n 입력: ");
	scanf("%d", &n);

	while (exp <= n) 
	{
		exp *= 2;
		if (exp <= n)
			k++;
		else
			break;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k);

	return 0;
}
