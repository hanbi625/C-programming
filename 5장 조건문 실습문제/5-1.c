#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if (N < 0)
		printf("cold, indoor\n");

	else if (N < 40)
		printf("moderate, outdoor\n");
	else
		printf("hot, indoor\n");

	return 0;
}
