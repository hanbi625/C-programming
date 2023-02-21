#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int a, b, c;
	double avg;

	scanf("%d %d %d", &a, &b, &c);
	avg = (a + b + c) / 3.0;
	printf("%.2f\n", avg);

	if (avg >= 75)
		printf("A\n");
	else if (avg >= 50)
		printf("B\n");
	else
		printf("F\n");

	return 0;
}