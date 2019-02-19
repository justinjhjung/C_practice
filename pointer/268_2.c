#include <stdio.h>

int main(void)
{
	char str[50];
	char temp;
	int idx = 0;
	int len = 0;

	printf("문자열 입력: ");
	scanf("%s", str);
	
	while (str[idx] != '\0')
	{
		len++;
		idx++;
	}
	
	for (idx = 0; idx < len/2; idx++)	
	{
		temp = str[idx];
		str[idx] = str[len-1-idx];	
		str[len-1-idx] = temp;
	}
	
	printf("역순 문자열:  %s", str);
	return 0;
}
