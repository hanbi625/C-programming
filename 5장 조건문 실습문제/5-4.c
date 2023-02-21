#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
		printf("%c", ch - 'a' + 'A');
	else if (ch >= 'A' && ch <= 'Z')
		printf("%c", ch - 'A' + 'a');
	else
		printf("none");

	return 0;
}