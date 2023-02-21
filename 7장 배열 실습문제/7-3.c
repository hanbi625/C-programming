#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[5], i, first, sec;

	for (i = 0; i < 5; i++)
		scanf("%d", &x[i]);

	if (x[0] >= x[1]) {
		first = x[0];
		sec = x[1];
	}
	else {
		first = x[1];
		sec = x[0];
	}

	for (i = 2; i < 5; i++) {
		if (x[i] > first) {
			sec = first;
			first = x[i];
		}
		else if (x[i] > sec)
			sec = x[i];
	}
	printf("%d\n%d", first, sec);

	return 0;
}
