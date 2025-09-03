// c 4564
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;  

        printf("%d ", n);

        while (n >= 10) {
            int mul = 1;
            int num = n;

            while (num > 0) {
                mul *= num % 10;
                num /= 10;
            }

            n = mul;
            printf("%d ", n);
        }

        printf("\n");
    }

	return 0;
}
#endif