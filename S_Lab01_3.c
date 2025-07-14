// c 10811
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int bas[101];
    for (int i = 1; i <= n; i++) {
        bas[i] = i;
    }
    for (int k = 0; k < m; k++) {
        int a, b;
        scanf("%d %d", &a, &b);

        for (int i = 0; i <= (b - a) / 2; i++) {
            int t = bas[a + i];
            bas[a + i] = bas[b - i];
            bas[b - i] = t;
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", bas[i]);
    }
    return 0;
}
#endif

