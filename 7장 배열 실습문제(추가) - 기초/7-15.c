#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[10];
	int i, j, cnt[10] = { 0 };

	for (i = 0; i < 10; i++)
		scanf("%c", &x[i]);

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++)
			if (x[i] == x[j])
				cnt[i]++;
	}
	for (i = 0; i < 10; i++)
		if (cnt[i] == 1)
			printf(" %c", x[i]);

	return 0;
}
