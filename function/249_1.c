#include <stdio.h>

int main(void)
{
	int money = 3500;
	int balance;
	const int price1 = 500, price2 = 700, price3 = 400;
	int num1 = 0, num2 = 0, num3 = 0; 
	int temp1, temp2, temp3;

	money -= (price1 * 1 + price2 * 1 + price3 * 1);
	balance = money;
	temp1 = balance/price1;	
	printf("balance: %d, limit of 크림빵: %d\n", balance, temp1);	
	while (num1 < temp1)
	{
		num1++;
		balance = money;
		balance -= price1 * num1;
		if (balance < 0)
			break;
		temp2 = balance / price2;
		printf("balance: %d, limit of 새우깡: %d\n", balance, temp2);	

		while (num2 < temp2)
		{	
			num2++;
			balance -= price2 * num2;
			if (balance < 0)
				break;
			temp3 = balance / price3;
			printf("balance: %d, limit of 콜 라: %d\n", balance, temp3);	

			while (num3 < temp3)
			{
				num3++;
				balance_check(balance, price3, num3);
			}
		}
	}			
	return 0;
}

int balance_check(static int balance, int price, int num)
{
	int temp;
	temp = balance;
	
	balance -= price * num;
	if (balance != 0)				
		return temp;
	else 
		return balance;	
}
