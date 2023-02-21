#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int x[10], i, j, cnt;

	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 10; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++)
			if (x[i] < x[j])
				cnt++;
		printf(" %d", cnt);
	}
  /*
  int x[10], cnt[10] = { 0 }, i, j;
	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			if (x[i] < x[j])
				cnt[i]++;
		printf(" %d", cnt[i]);
	}
  */

	return 0;
}
