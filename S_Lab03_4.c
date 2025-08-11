//c 2839
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int bag = 0;

    while (n >= 0) {
        if (n % 5 == 0) {
            bag += n / 5;
            printf("%d\n", bag);
            return 0;
        }
        n -= 3;
        bag++;
    }
    printf("-1\n");
    return 0;
}
#endif

