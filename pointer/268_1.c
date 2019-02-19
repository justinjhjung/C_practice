#include <stdio.h>

int main(void)
{
	char str[50];
	int len = 0, idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
		len++;
	}
	printf("문자열 길이: %d", len);
	return 0;
}
