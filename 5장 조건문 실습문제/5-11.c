#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c;
	int A, B, C;
	int cnts = 0, cntb = 0;

	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &A, &B, &C);

	if (a == A)
		cnts++;
	if (b == B)
		cnts++;
	if (c == C)
		cnts++;

	if (a == B || a == C)
		cntb++;
	if (b == A || b == C)
		cntb++;
	if (c == A || c == B)
		cntb++;

	printf("%dS%dB", cnts, cntb);

	return 0;
}