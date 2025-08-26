// c 1546
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int score[1000];
    int max = 0;
    double sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        if (score[i] > max) {
            max = score[i];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += (double)score[i] / max * 100;
    }

    printf("%lf\n", sum / n);

    return 0;
}
#endif

