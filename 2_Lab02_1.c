// c 2588
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a * (b % 10));
    printf("%d\n", a * ((b / 10) % 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b);

	return 0;
}
#endif