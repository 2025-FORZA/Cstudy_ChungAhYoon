//c 1526
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

    for (int i = N; i >= 4; i--) {
        int x = i;
        int ok = 1;
        while (x > 0) {
            int d = x % 10;
            if (d != 4 && d != 7) {
                ok = 0;
                break;
            }
            x /= 10;
        }
        if (ok) {
            printf("%d\n", i);
            break;
        }
    }


	return 0;
}
#endif