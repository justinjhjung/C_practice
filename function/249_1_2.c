#include <stdio.h>

int main(void)
{
	int money, n1 = 0, n2 = 0, n3 = 0;
	int p1 = 500, p2 = 700, p3 = 400;
	int temp1, temp2, temp3;

	printf("현재 당신이 소유하고 있는 금액: ");
	scanf("%d", &money);
	money -= (p1 + p2 + p3); //assume we already bought every item
	while (money >= p2 * n2) 
	{
		temp1 = money;
		temp1 -= p2 * n2;
		if (temp1 == 0)
		{
			printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n1+1, n2+1, n3+1);
			break;
		}

		while (temp1 >= p1 * n1)
		{
			temp2 = temp1;
			temp2 -= p1 * n1;
			if (temp2 == 0)
			{
				printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n1+1, n2+1, n3+1);
				break;
			}

			while (temp2 >= p3 * n3)
			{
				temp3 = temp2;
				temp3 -= p3 * n3;
				if (temp3 == 0)
				{
					printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n1+1, n2+1, n3+1);
					break;
				}
				n3++;
			}
			n1++;
			n3 = 0;
		}
		n2++;
		n1 = 0;
	}
	printf("어떻게 구입하시겠습니까?");
	return 0;
}
