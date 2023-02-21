#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (max < b && c < b)
		max = b;
	else if (max < c && b < c)
		max = c;

	min = a;
	if (min > b && c > b)
		min = b;
	else if (min > c && b > c)
		min = c;
	printf("%d %d", max, min);


	return 0;
}