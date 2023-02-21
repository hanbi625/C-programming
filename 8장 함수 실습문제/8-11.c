#pragma warning(disable:4996)
#include <stdio.h>
int count_strike(int, int, int);
int count_ball(int, int, int);
int a, b, c;
int main()
{
    int x, y, z;
    int strike, ball;
    scanf("%d %d %d", &a, &b, &c);
    while (1) {
        scanf("%d %d %d", &x, &y, &z);
        strike = count_strike(x, y, z);
        ball = count_ball(x, y, z);
        printf("%dS%dB\n", strike, ball);
        if (strike == 3) break;
    }

    return 0;
}
int count_strike(int x, int y, int z)
{
    int cnt = 0;
    if (a == x)
        cnt++;
    if (b == y)
        cnt++;
    if (c == z)
        cnt++;
    return cnt;
}
int count_ball(int x, int y, int z)
{
    int cnt = 0;
    if (a == y || a == z)
        cnt++;
    if (b == x || b == z)
        cnt++;
    if (c == x || c == y)
        cnt++;
    return cnt;
}
