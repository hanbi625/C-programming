#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[3][3], y[2][2];
	int cnt = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &x[i][j]);
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &y[i][j]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf(" %d", x[i][j]);
		printf("\n");
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			printf(" %d", y[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++) {
			if (x[i][j] == y[0][0] && x[i][j + 1] == y[0][1] && x[i + 1][j] == y[1][0]
				&& x[i + 1][j + 1] == y[1][1])
				printf("%d %d", i, j);
			else
				cnt++;
		}
	if (cnt == 4) printf("none");
	return 0;
}
