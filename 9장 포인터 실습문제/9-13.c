#pragma warning(disable:4996)
#include <stdio.h>
int arrsum(int* x, int* y, int arr[]) {
	int* p, sum = 0;
	for (p = arr + *x; p <= arr + *y; p++)
		sum += *p;
	return sum;
}
int main() {
	int N, S, E, x[100];
	int *pN;
	scanf("%d %d %d", &N, &S, &E);

	for (pN = x; pN < x + N; pN++)
		scanf("%d", pN);
	printf("%d", arrsum(&S, &E, x));

	return 0;
}
