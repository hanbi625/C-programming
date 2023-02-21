#pragma warning(disable:4996)
#include <stdio.h>
int sum(int n)
{
    return n / 2.0 + n * n / 2.0;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", sum(B) - sum(A - 1));
    return 0;
}
