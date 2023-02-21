#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int i, sum1 = 0, sum2 = 0;

	for (i = 1; i <= 10; i++) {
		if (i % 2 != 0)
			sum1 += i;
		else
			sum2 += i;
	}
	printf("%d\n%d", sum1, sum2);

	return 0;
}
