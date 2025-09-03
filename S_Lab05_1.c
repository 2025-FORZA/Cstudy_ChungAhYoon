// c 10872
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, i;
    int result = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    printf("%d", result);
    return 0;
}
#endif