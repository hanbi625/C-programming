#pragma warning(disable:4996)
#include <stdio.h>
int is_prime(int);
int next_prime(int);
int main() {
	int N, M;
	int x;
	scanf("%d %d", &N, &M);
	x = N;
	for (int i = 0; i < M; i++) {
		printf(" %d", next_prime(x));
		x = next_prime(x);
	}

	return 0;
}
int next_prime(x) {
	do {
		++x;
	} while (!is_prime(x));
	return x;
}
int is_prime(x) {
	int cnt = 0;
	for (int i = 2; i <= x; i++)
		if (x % i == 0)
			cnt++;
	if (cnt == 1) return x;
	return 0;
}
