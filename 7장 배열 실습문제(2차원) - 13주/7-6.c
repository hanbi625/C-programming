#pragma warning(disable:4996)
#include <stdio.h>
void prt(int x[][5], int N);
int main() {
	int N;
	int x[20][5];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 5; j++)
			scanf("%d", &x[i][j]);

	prt(x, N);
	return 0;
}
void prt(int x[][5], int N) {

	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j < 5; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}

}
