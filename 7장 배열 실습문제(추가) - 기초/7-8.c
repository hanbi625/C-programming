#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, i = 0, j, x[10], cnt = 0;
	scanf("%d", &N);

	while (N) {
		x[i++] = N % 10;
		cnt++;
		N /= 10;
	}
	for (j = 0; j < cnt; j++)
		printf(" %d", x[j]);
  
	return 0;
}
