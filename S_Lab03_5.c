//c 10870
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}
#endif

