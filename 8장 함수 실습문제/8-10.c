#pragma warning(disable:4996)
#include <stdio.h>
int N;
void die1(int);
void die2(int, int);
void die3(int, int, int);
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= 6; i++)
		die1(i);

	return 0;
}
void die1(x) {
	die2(N, x);
}
void die2(x, y) {
	for (int i = 1; i <= 6; i++) {
		die3(x, y, i);
	}
}
void die3(x, y, z) {
	for (int i = 1; i <= 6; i++) {
		if (N == y + z + i)
			printf("%d %d %d\n", y, z, i);
	}
}
