#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], i, max;
  
	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	max = x[0];

	for (i = 0; i < 10; i++)
		if (x[i] > max)
			max = x[i];
	printf("%d", max);
  
	return 0;
}
