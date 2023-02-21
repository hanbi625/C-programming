#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int N, sum = 0, cnt = 0;
	double avg;

	scanf("%d", &N);
	if (N > 0 && N < 100) {
		sum += N;
		cnt++;
	}
	while (N > 0) {
		scanf("%d", &N);
		if (N <= 0)
			break;
		if (N > 100)
			continue;
		sum += N;
		cnt++;
	}
	avg = sum / (double)cnt;
	printf("%d %.2f %d", sum, avg, cnt);

	return 0;
}
