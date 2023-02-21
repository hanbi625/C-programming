#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[5];
	int i, j, k = 0, temp, cnt;

	for (i = 0; i < 5; i++)
		scanf("%c", &x[i]);
	temp = 5;
	while (temp--) {
		cnt = 0;
		if (k < 0) k = 4;
		for (j = k;; j++) {
			if (cnt == 5) {
				printf("\n");
				break;
			}
			if (j >= 5) j %= 5;
			printf("%c", x[j]);
			cnt++;
		}
		k--;
	}

	return 0;
}
