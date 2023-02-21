#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i = 1;
	scanf("%d", &N);

	while (N >= i) {
		if (N % i == 0)
			printf("%d ", i);
		i++;
	}
	/*
	for (i = 1; i <= N; i++) {
		if (N % i == 0)
			printf("%d ", i);
	}
	*/

	return 0;
}
