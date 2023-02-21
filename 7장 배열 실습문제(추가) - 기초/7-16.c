#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, idx;
	char x[10];
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
		scanf("%c", &x[i]);
	for (int i = 0; i < N; i++) {
		scanf("%d", &idx);
		printf("x[%d%%%d]=x[%d]=%c\n", idx, N, idx % N, x[idx % N]);
	}

	return 0;
}
