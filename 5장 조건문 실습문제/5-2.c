#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, M, n, m;
	scanf("%d %d", &N, &M);
	n = N * N;
	m = M * M;

	if (n == M)
		printf("%d*%d=%d", N, N, M);
	else if (m == N)
		printf("%d*%d=%d", M, M, N);
	else
		printf("none");

	return 0;
}