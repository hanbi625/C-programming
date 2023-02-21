#pragma warning(disable:4996)
#include <stdio.h>
void print_triangle(int);
int main() {
	int N;
	while (1) {
		scanf("%d", &N);
		if (N <= 0) break;
		print_triangle(N);
	}

	return 0;
}
void print_triangle(int x) {
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
