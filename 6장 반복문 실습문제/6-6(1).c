#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N;
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (i == j || j == N - i + 1) 
				printf(" X");
			else 
				printf(" O");
		}
		printf("\n");
	}

	return 0;
}
