#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j;
	int num = 1;
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= i; j++) {
			printf(" %d", num % 10);
			num++;
		}
		printf("\n");
	}

	return 0;
}
