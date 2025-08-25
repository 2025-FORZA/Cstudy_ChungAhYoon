// c 2562
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[9];
    int max = 0, ind = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        if (num[i] > max) {
            max = num[i];
            ind = i;
        }
    }
    printf("%d\n%d\n", max, ind + 1);
    return 0;
}
#endif

