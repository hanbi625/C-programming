#pragma warning(disable:4996)
#include <stdio.h>
int count_3(int);
int main() {
	int N;

	scanf("%d", &N);
	printf("%d", count_3(N));

	return 0;
}
int count_3(x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		int j = i;
		while (j) {
			if (j % 10 == 3) cnt++;
			j /= 10;
		}
	}
	return cnt;
}
