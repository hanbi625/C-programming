#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char ch = 'a';

	do {
		printf("%c", ch++);
	} while (ch <= 'z');

	return 0;
}
