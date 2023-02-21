#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, M;
	int price, money;
	int cnt5 = 0, cnt1 = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	switch (N) {
	case 1:
		printf("Americano\n");
		price = 500;
		break;
	case 2:
		printf("Cafe Latte\n");
		price = 400;
		break;
	case 3:
		printf("Lemon Tea\n");
		price = 300;
		break;
	}
	money = M - price;
	cnt5 = money / 500;
	cnt1 = money % 500 / 100;

	printf("%d %d", cnt5, cnt1);

	return 0;
}