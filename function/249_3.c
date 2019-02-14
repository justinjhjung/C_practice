#include <stdio.h>

int main(void)
{
	int seconds;
	int h, m, s;

	printf("초(second) 입력: ");
	scanf("%d", &seconds);

	h = seconds / 3600;
	seconds -= 3600 * h;
	m = seconds / 60;
	seconds -= 60 * m;
	s = seconds % 60; 
	printf("[h:%d, m:%d, s:%d]", h, m, s);
	return 0;
}
