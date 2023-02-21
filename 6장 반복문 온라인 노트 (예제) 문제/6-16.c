#pragma warning(disable:4996)
#include <stdio.h>
int main() {
    int n, d, cnt = 0;
    for (n = 2; n <= 50; ++n) {
        d = 2;
        while (d < n && n % d != 0)
            ++d;
        if (d == n) {
            printf(" %d", n);
            cnt++;
            if (cnt % 5 == 0)
                printf("\n");
        }
    }

    return 0;
}
