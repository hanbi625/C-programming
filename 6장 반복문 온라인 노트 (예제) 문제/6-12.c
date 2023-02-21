#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("   ");

	for (i = 1; i <= 31; i++) {
		printf("%3d", i);
		if ((i + n) % 7 == 0)
			printf("\n");
	}

	return 0;
}
