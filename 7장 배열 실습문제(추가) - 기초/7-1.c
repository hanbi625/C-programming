#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], i;

	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);

	for (i = 0; i < 10; i++)
		if (x[i] % 2 == 0)
			printf(" %d", x[i]);

	return 0;
}
