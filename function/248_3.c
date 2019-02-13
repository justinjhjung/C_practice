#include <stdio.h> 
int gcd(int a, int b);

int main(void)
{
	int num1, num2;
	int res;

	printf("Write down two numbers: ");
	scanf("%d %d", &num1, &num2);

	res = gcd(num1, num2);
	printf("GCD: %d", res);
	return 0;
}

int gcd(int a, int b)
{
	if (a > b)
	{
		if (a % b == 0)
			return b;
	}
	else if (b > a)
	{
		if (b % a == 0)
			return a;
	}
	else
		return a;
	return a > b ? gcd(a-b, b) : gcd(b-a, a);
}

