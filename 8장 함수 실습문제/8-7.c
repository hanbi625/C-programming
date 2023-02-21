#pragma warning(disable:4996)
#include <stdio.h>
int func2(int, int, int, int);
int main() {
	int x, a, b, c;

	scanf("%d %d %d %d", &x, &a, &b, &c);
	printf("%d", func2(x, a, b, c));

	return 0;
}
int func2(x, a, b, c) {
	int result = a * x * x + b * x + c;
	return result;
}
