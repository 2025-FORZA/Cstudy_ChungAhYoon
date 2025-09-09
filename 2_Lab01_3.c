// c 5086
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    while (!(a == 0 && b == 0)) {
        if (b % a == 0) {
            printf("factor\n");
        }
        else if (a % b == 0) {
            printf("multiple\n");
        }
        else {
            printf("neither\n");
        }
        scanf("%d %d", &a, &b);
    }

	return 0;
}
#endif