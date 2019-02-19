#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming";

	printf("입력받은 문자열: %s \n", str);

	str[8] = '\0';
	printf("입력받은 문자열: %s \n", str);

	str[6] = '\0';
	printf("입력받은 문자열: %s \n", str);

	return 0;
}
