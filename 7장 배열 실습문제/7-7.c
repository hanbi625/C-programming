#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[10], i, j, k, cnt, temp;
	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 10; i++) {
		cnt = 0;
		temp = 0;
		for (j = 0; j < 10; j++)
			if (x[i] == x[j])
				cnt++;
		for (k = i; k >= 0; k--)
			if (x[i] == x[k])
				temp++;
		if (temp == 1)
			printf("%d %d\n", x[i], cnt);
	}


	return 0;
}
