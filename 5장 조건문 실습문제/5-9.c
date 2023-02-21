#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int y1, m1, d1;
	int y2, m2, d2;

	scanf("%d/%d/%d", &y1, &m1, &d1);
	scanf("%d/%d/%d", &y2, &m2, &d2);

	if (y1 > y2)
		printf("%04d/%02d/%02d", y2, m2, d2);
	else if (y2 > y1)
		printf("%04d/%02d/%02d", y1, m1, d1);
	else
		if (m1 > m2)
			printf("%04d/%02d/%02d", y2, m2, d2);
		else if (m2 > m1)
			printf("%04d/%02d/%02d", y1, m1, d1);
		else
			if (d1 > d2)
				printf("%04d/%02d/%02d", y2, m2, d2);
			else if (d2 > d1)
				printf("%04d/%02d/%02d", y1, m1, d1);
			else
				printf("%04d/%02d/%02d*", y2, m2, d2);

	return 0;
}