//c 25703
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("int a;\n");
    printf("int *ptr = &a;\n");

    for (int i = 2; i <= N; i++) {
        printf("int ");
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        if (i == 2) {
            printf("ptr%d = &ptr;\n", i);
        }
        else {
            printf("ptr%d = &ptr%d;\n", i, i - 1);
        }
    }

	return 0;
}
#endif