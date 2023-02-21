#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], y[10], z[10], k;
	for (k = 0; k < 10; k++)
		scanf("%d", &x[k]);
	for (k = 0; k < 10; k++)
		scanf("%d", &y[k]);
	for (k = 0; k < 10; k++) {
		z[k] = x[k] + y[9 - k];
		printf(" %d", z[k]);
	}

	return 0;
}
