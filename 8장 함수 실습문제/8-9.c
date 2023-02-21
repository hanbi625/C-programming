#pragma warning(disable:4996)
#include <stdio.h>
int max1, max2;
void update_max(int);
int main() {
	int x;
	scanf("%d", &x);
	max1 = x;
	while (1) {
		scanf("%d", &x);
		if (x == 0) break;
		update_max(x);
	}
	printf("%d %d", max1, max2);

	return 0;
}
void update_max(x) {
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2) {
		max2 = x;
	}
}
