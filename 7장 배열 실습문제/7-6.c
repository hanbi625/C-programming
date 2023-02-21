#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[3], ans[3] = { '_', '_', '_' }, result;
	int i, j, cnt = 0;

	for (i = 0; i < 3; i++)
		scanf("%c", &x[i]);
	getchar();

	for (i = 0; i < 5; i++) {
		scanf("%c", &result);
		getchar();
		for (j = 0; j < 3; j++)
			if (result == x[j]) {
				ans[j] = result;
				cnt++;
			}
		for (j = 0; j < 3; j++)
			printf(" %c", ans[j]);
		printf("\n");
		if (cnt == 3) break;
	}

	return 0;
}
