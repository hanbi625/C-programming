#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	printf("%dTTHO %dTHO %dHUN %dTEN %d", num / 10000, num % 10000 / 1000, num % 1000 / 100, num % 100 / 10, num % 10);

	return 0;
}
