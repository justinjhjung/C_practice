#include <stdio.h>
void Swap3(int * s1, int * s2, int * s3);

int main(void)
{	
	int n1, n2, n3;
	printf("Write down three integers in a row: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	Swap3(&n1, &n2, &n3);
	return 0;
}

void Swap3(int * s1, int * s2, int * s3)
{		
	int temp = *s3;
	*s3 = *s2;
	*s2 = *s1;
	*s1 = temp;
	
	printf("n1 n2 n3 : %d %d %d", *s1, *s2, *s3);
}
