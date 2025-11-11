//c 1978
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int decide(int num) {
    if (num < 2)
        return 0;
    for(int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    int N, num, count = 0;
	scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (decide(num))
            count++;
    }
    printf("%d\n", count);


	return 0;
}
#endif