#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, x[10], i, M = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		M *= 10;
		scanf("%d", &x[i]);
		M += x[i];
	}
	printf("%d", M);

	return 0;
}
