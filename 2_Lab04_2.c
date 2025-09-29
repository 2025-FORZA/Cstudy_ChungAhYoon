// c 2525
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int A, B, C;

	scanf("%d %d", &A, &B);
    scanf("%d", &C);

    B = B + C;
    while (B >= 60) {
        B = B - 60;
        A = A + 1;
    }
    if (A >= 24) {
        A = A - 24;
    }
	
    printf("%d %d\n", A, B);

	return 0;
}
#endif