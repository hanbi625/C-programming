#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int input;
	double num;
	int result;

	scanf("%d", &input);
	num = input / 1000.0;
	num += 0.5;
	result = (int)num;
	printf("%d", result * 1000);

	return 0;
}
