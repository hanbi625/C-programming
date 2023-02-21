#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int M, N;
	int i, j, result = 1;
	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++) {
		printf("%d!=", i);
		for (j = 1; j <= i; j++) {
			result *= j;
			if (i != j)
				printf("%d*", j);
			else
				printf("%d", j);
		}
		printf("=%d\n", result);
		result = 1;
	}

	return 0;
}
