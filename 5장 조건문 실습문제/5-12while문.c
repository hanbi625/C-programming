#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, M;
	int price, money;
	int cnt5 = 0, cnt1 = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	if (N == 1) {
		printf("Americano\n");
		price = 500;
	}
	else if (N == 2) {
		printf("Cafe Latte\n");
		price = 400;
	}
	else {
		printf("Lemon Tea\n");
		price = 300;
	}
	money = M - price;
	cnt5 = money / 500;
	cnt1 = money % 500 / 100;

	printf("%d %d", cnt5, cnt1);

	return 0;
}