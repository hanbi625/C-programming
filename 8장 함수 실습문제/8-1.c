#pragma warning(disable:4996)
#include <stdio.h>
int add(int, int);
int main() {
	int N, sum = 0;
	scanf("%d", &N);

	if (N % 2 == 0)
		for (int i = 1; i <= N; i += 2)
			sum += add(i, i + 1);
	else {
		for (int i = 1; i < N; i += 2)
			sum += add(i, i + 1);
		sum += N;
	}
	printf("%d", sum);
	/*
	int N, sum;
    scanf("%d", &N);
    sum = add(N * N, N) * 0.5;
    printf("%d", sum);
	*/

	return 0;
}
int add(int x, int y) {
	return x + y;
}
