#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);

	if (N == M)
		printf("RIGHT\n");
	else if (N > M)
	{
		printf("UP\n");
		scanf("%d", &M);
		if (N == M)
			printf("RIGHT");
		else if (N > M)
			printf("UP\n");
		else
			printf("DOWN\n");
	}
	else
	{
		printf("DOWN\n");
		scanf("%d", &M);
		if (N == M)
			printf("RIGHT");
		else if (N > M)
			printf("UP\n");
		else
			printf("DOWN\n");
	}

	return 0;
}