#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j, cnt = 0;
	scanf("%d", &N);

	while (N) {
		if (N % 10 == 3)
			cnt++;
		N /= 10;
	}
	printf("%d", cnt);

	return 0;
}
