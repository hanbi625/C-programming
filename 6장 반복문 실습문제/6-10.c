#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, sum = 0;
	scanf("%d", &N);

	while (N >= 10) {
		sum = 0;
		while (N > 0) {
			sum += N % 10;
			N /= 10;
		}
		N = sum;
	}
	printf("%d", sum);

	return 0;
}
