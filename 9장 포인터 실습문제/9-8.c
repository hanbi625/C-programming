#pragma warning(disable:4996)
#include <stdio.h>
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int N, x[50], a, b;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);
	scanf("%d %d", &a, &b);
	swap(&x[a], &x[b]);
	for (int i = 0; i < N; i++)
		printf(" %d", x[i]);

	return 0;
}
