#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, M, cnt = 0;
	scanf("%d", &N);
	do {
		scanf("%d", &M);
		cnt++;
		if (M > N)
			printf("%d>?\n", M);
		else if (M < N)
			printf("%d<?\n", M);
		else
			printf("%d==?\n", M);
	} while (N != M);
	printf("%d", cnt);

	return 0;
}
