#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n = 1, sum = 0;

	while (sum < 100) {
		sum += n;
		n++;
	}
	printf("%d", n - 1);

	return 0;
}
