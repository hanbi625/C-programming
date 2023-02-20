#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int time;
	scanf("%d", &time);

	printf("%d:%d:%d", time / 3600, time % 3600 / 60, time % 60);

	return 0;
}
