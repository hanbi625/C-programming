#pragma warning(disable:4996)
#include <stdio.h>
int func2(int, int, int, int);
int main() {
	int fx, fa, fb, fc, res1;
	int ga, gb, gc;

	scanf("%d %d %d %d", &fx, &fa, &fb, &fc);
	scanf("%d %d %d", &ga, &gb, &gc);
	res1 = func2(fx, fa, fb, fc);
	printf("%d", func2(res1, ga, gb, gc));

	return 0;
}
int func2(x, a, b, c) {

	int result = a * x * x + b * x + c;
	return result;
}
