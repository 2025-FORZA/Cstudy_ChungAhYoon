// c 17608
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
    int block[100000] = { 0 };
    int count = 1;
    int max;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &block[i]);
    }

    max = block[N - 1];

    for (int i = N - 2; i >= 0; i--) {
        if (block[i] > max) {
            count++;
            max = block[i];
        }
    }

    printf("%d\n", count);

	return 0;
}
#endif