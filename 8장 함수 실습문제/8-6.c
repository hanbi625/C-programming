#pragma warning(disable:4996)
#include <stdio.h>
int func1(int);
int main() {
	int x;

	scanf("%d", &x);
	printf("%d", func1(x));

	return 0;
}
int func1(int x) {
	int result = 2 * x * x - 5 * x + 1;
	return result;
}
