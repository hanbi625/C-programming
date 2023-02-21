#pragma warning(disable:4996)
#include <stdio.h>
void addArray(int* x, int* y, int* z, int N) {
	int* p;
	for (p = z; p < z + N; p++) {
		*p = *x + *(y + N - 1);
		x++;
		y--;
	}
}
int main() {
	int N;
	int x[20], y[20], s[20];
	int* px, * py, * ps;

	scanf("%d", &N);
	for (px = x; px < x + N; px++)
		scanf("%d", px);
	for (py = y; py < y + N; py++)
		scanf("%d", py);
	ps = s;
	addArray(x, y, s, N);
	for (ps = s; ps < s + N; ps++)
		printf(" %d", *ps);

	return 0;
}
