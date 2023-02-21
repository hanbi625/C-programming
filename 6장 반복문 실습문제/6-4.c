#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, M, i;
	int min, max, result;

	scanf("%d %d", &N, &M);

	min = N > M ? M : N;
	max = N > M ? N : M;

	for (i = 1; i <= min; i++) {
		if (N % i == 0 && M % i == 0)
			result = i;
	}
	printf("%d", result);

	return 0;
}
