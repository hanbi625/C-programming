#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	double x[10];
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);
		if (x[i] > 0)
			printf(" %.1f", x[i]);
	}

	return 0;
}
