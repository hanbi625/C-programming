#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[5], i, j, sum = 0;
	double avg;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x[i]);
		sum += x[i];
	}
	avg = sum / 5.0;
	for (i = 0; i < 5; i++)
		if (x[i] > avg)
			printf("%d\n", x[i]);

	return 0;
}
