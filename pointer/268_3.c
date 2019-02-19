#include <stdio.h>

int main(void)
{
	char str[50];
	int idx = 0;
	char res = 0;

	printf("문자열 입력: ");
	scanf("%s", str);
	
	while (str[idx] != '\0')	
	{
		if (str[idx] > res)
			res = str[idx];
		idx++;	
	}
	printf("%c", res);
	return 0;
}
