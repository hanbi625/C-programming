#pragma warning(disable:4996)
#include <stdio.h>
void print_row1(int);
void print_row2(int);
int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i == 1 || i == N)
			print_row1(N);
		else print_row2(N);
	}
	return 0;
}
void print_row1(int x) {
	for (int i = 0; i < x; i++)
		printf("%d", x);
	printf("\n");
}
void print_row2(int x) {
	for (int i = 1; i <= x; i++) {
		if (i == 1 || i == x)
			printf("%d", x);
		else
			printf(" ");
	}
	printf("\n");
}
