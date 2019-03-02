#include <stdio.h>
#include <stdbool.h>
bool IsPal(char str[], int len);
int Length(char str[]);

int main(void)
{
	char word[100]={0};
	int i=0, len=0;
	printf("Put English word to see if it is Palindrome or not: ");
	scanf("%s", word);
	len = Length(word);

	// Put a word without 0 to the new character array
	char res[len];
	while (word[i]!=0)
	{
		res[i] = word[i];
		i++;
	}
	
	// Distinguish whether the word is palindrome or not
	if (IsPal(res, len))
		printf("This word is a Palindrome");
	else
		printf("This word is not a Palindrome");
	return 0;
}

bool IsPal(char str[], int len)
{
	int i;
	char * fptr = &str[0];
	char * bptr = &str[len-1];

	for (i=0; i<len/2; i++)
	{
		if (*fptr != *bptr)
			return false;
		fptr++;
		bptr--;
	}
	return true;
}		

int Length(char str[])
{
	int i, len=0;
	char * ptr = &str[0];
	while (*ptr!=0)
	{
		len += 1;
		ptr++;
	}
	return len;
}
		
