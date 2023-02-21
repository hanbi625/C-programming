#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c;
	double avg;
	int score;

	scanf("%d %d %d", &a, &b, &c);
	avg = (a + b + c) / 3.0;
	printf("%.2f\n", avg);
	score = (int)avg;
	switch (score / 25)
	{
	case 4:
	case 3:
		printf("A");
		break;
	case 2:
		printf("B");
		break;
	default:
		printf("F");
		break;
	}

	return 0;
}