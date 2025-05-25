// c 11720
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    char number[101];
    int sum = 0;

    scanf("%d", &n);
    scanf("%s", number);

    for (int i = 0; i < n; i++) {
        sum = sum + (number[i] - '0');
    }

    printf("%d\n", sum);
    return 0;
}
#endif
