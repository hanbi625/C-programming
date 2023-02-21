#pragma warning(disable : 4996)
#include<stdio.h>
int main() {
	int N, i, j, c = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++)
			printf("   ");
		for (j = N; j > i; j--)
			printf("%3d", ++c);
		printf("\n");
	}

	return 0;
}
