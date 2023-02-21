#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char x[7];
	int i, cnt = 0;

	for (i = 0; i < 7; i++)
		scanf("%c", &x[i]);
	for (i = 0; i < 5; i++)
		if (x[i] == 'c' && x[i + 1] == 'a' && x[i + 2] == 't')
			cnt++;
	printf("%d", cnt);

	return 0;
}
