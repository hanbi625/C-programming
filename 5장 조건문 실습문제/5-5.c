#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
		printf("A\n");
	else if (n % 2 == 0 && n % 3 == 0 && n % 5 != 0)
		printf("B\n");
	else if (n % 2 == 0 && n % 3 != 0 && n % 5 == 0)
		printf("C\n");
	else if (n % 2 != 0 && n % 3 == 0 && n % 5 == 0)
		printf("D\n");
	else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
		printf("N\n");
	else
		printf("E\n");

	return 0;
}