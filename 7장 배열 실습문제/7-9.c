#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[5], i, tmp;
	for (i = 0; i < 5; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++)
			if (x[j] > x[j + 1]) {
				tmp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = tmp;
			}
	}
	for (i = 0; i < 5; i++)
		printf("%d\n", x[i]);

	return 0;
}
