#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	double x[10];
	int i, j, cnt;

	for (i = 0; i < 10; i++)
		scanf("%lf", &x[i]);
	for (i = 0; i < 10; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++)
			if (x[i] > x[j])
				cnt++;
		printf(" %d", cnt);
	}

	return 0;
}
