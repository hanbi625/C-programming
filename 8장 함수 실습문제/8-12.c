#pragma warning(disable:4996)
#include <stdio.h>
void print_line(int, int, int);
int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		print_line(N - 1 - i, 2 * i + 1, N - 1 - i);

	return 0;
}
void print_line(x, y, z) {
	for (int i = 0; i < x; i++) printf(" ");
	for (int j = 0; j < y; j++) printf("*");
	for (int k = 0; k < z; k++) printf(" ");
	printf("\n");
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
void print_line(int, int, int);
int main() {
	int N;

	scanf("%d", &N);
	print_line(N - 1, 1, N - 1);

	return 0;
}
void print_line(x, y, z) {
	for (int i = 0; i < x + 1; i++) {
		for (int j = x; j > i; j--)
			printf(" ");
		for (int j = 1; j <= 2 * i + 1; j++)
			printf("*");
		for (int j = x; j > i; j--)
			printf(" ");
		printf("\n");
	}
}
*/
