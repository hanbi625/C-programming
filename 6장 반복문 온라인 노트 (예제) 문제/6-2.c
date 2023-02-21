#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
		printf("%c", ch++);
	printf("\n");

	return 0;
}
