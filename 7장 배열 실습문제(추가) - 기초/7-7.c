#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int x[10], i, j, f;
	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 10; i++) {
		f = 0;
		for (j = 0; j < i; j++)
			if (x[i] == x[j])
				f = 1;
		if (f == 0)
			printf(" %d", x[i]);
	}

	return 0;
}
