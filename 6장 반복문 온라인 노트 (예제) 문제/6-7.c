#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int n = 1, sum = 0;

	do {
		sum += n;
		n++;
	} while (sum < 100);

	printf("%d", n - 1);

	return 0;
}
