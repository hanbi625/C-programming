#pragma warning(disable:4996)
#include <stdio.h>
void input(int *px, int *py, int *pz) {
	scanf("%d %d %d", px, py, pz);
}
void output(int *px, int *py, int *pz) {
	printf("%d %d %d", *px, *py, *pz);
}
int main() {
	int x, y, z;
	input(&x, &y, &z);
	output(&x, &y, &z);

	return 0;
}
