#include <stdio.h> 
int main(void)
{
	int korean, math, english;
	double mean;

	printf("국어, 수학, 영어 점수 순서대로 입력: ");
	scanf("%d %d %d", &korean, &math, &english);
	mean = (korean + math + english) / 3;

	if (mean >= 90)
		printf("학점은 A입니다.");
	else if (mean >= 80 && mean < 90)
		printf("학점은 B입니다.");
	else if (mean >= 70 && mean < 80)
		printf("학점은 C입니다.");
	else if (mean >= 50 && mean < 70)
		printf("학점은 D입니다.");
	else
		printf("학점은 F입니다.");
	return 0;
}
