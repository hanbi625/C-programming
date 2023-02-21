#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j;
	scanf("%d", &N);

	for (i = N; i >= 1; i--) {
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
