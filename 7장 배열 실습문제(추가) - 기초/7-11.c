#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	double x[10], min;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%lf", &x[i]);
	min = x[0];
	for (i = 0; i < 10; i++)
		if (min > x[i])
			min = x[i];
	printf("%.1f", min);
	
	return 0;
}
