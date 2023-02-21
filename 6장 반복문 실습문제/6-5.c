#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = N; j > i; j--)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
