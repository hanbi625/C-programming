#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], i, j, k, cnt[3] = { 0 };

	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 10; i++) {
		if (x[i] == 1)
			cnt[0]++;
		else if (x[i] == 2)
			cnt[1]++;
		else
			cnt[2]++;
	}
	for (j = 0; j < 3; j++) {
		printf("%d:", j + 1);
		for (k = 0; k < cnt[j]; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
