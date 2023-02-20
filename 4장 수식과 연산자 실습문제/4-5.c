#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	double N, r, s, pi = 3.14;

	scanf("%lf", &N);
	r = N / (2 * pi);
	s = pi * r * r;
	s += 0.5;
	printf("%d", (int)s);

	return 0;
}
