#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char ch;
	int i, n;

	scanf("%c %d", &ch, &n);
	for (i = 0; i < n; i++)
		printf("%c", ch);

	return 0;
}
