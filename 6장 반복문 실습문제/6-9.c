#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i, j, cnt = 0;
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		j = i;
		while (j) {
			if (j % 10 == 3)
				cnt++;
			j /= 10;
		}
	}
	printf("%d", cnt);

	return 0;
}
