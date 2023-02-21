#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i = 0, j;
	int count = 1, num = 1;
	scanf("%d", &N);

	while (i < N) {
		i++;
		for (j = 1; j <= N; j++) {
			printf(" %d", num % 10);
			num++;
		}
		count++;
		printf("\n");
		num = count % 10;
	}

	return 0;
}
