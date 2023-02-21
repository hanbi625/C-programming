#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[3][3];
	int result;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &x[i][j]);
	
	result = x[0][0] + x[1][1] + x[2][2];

	printf("%d", result);

	return 0;
}
