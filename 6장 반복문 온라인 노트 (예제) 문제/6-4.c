#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int num, min;
	scanf("%d", &num);
	min = num;
	while (num != 0) {
		if (min > num)
			min = num;
		scanf("%d", &num);
	}
	printf("%d", min);

	return 0;
}
