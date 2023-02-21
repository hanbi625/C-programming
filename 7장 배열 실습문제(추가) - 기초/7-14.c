#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[10], y[10];
	int i;

	for (i = 0; i < 10; i++)
		scanf("%c", &x[i]);
	getchar();
	for (i = 0; i < 10; i++)
		scanf("%c", &y[i]);
	getchar();
	for (i = 0; i < 10; i++)
		printf(" %c %c", x[i], y[i]);

	return 0;
}
