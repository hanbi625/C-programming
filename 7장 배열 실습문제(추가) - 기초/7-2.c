#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], i, sum = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		sum += x[i];
	}
	printf("%d", sum);

	return 0;
}
