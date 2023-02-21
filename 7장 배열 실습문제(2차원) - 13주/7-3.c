#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[6][5] = { {'Z', 'E', 'R', 'O', '-'}, {'O', 'N', 'E', '-', '-'},
		{'T', 'W', 'O', '-', '-'}, {'T', 'H', 'R', 'E', 'E'}, {'F', 'O', 'U', 'R', '-'},
		{'F', 'I', 'V', 'E', '-'} };
	int n;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		for (int j = 0; j < 5; j++)
			printf("%c", x[n][j]);
		printf("\n");
	}


	return 0;
}
