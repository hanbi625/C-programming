#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, sum = 0;
	scanf("%d", &N);

	while (N) {
		sum += N;
		scanf("%d", &N);
	}
	printf("%d", sum);

	return 0;
}
