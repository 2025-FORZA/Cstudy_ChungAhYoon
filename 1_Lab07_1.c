// c 14467
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int cow[11] = { 0 };
    int check[11] = { 0 };
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num, pos;
        scanf("%d %d", &num, &pos);

        if (check[num] == 0) {
            cow[num] = pos;
            check[num] = 1;
        }
        else {
            if (cow[num] != pos) {
                count++;
                cow[num] = pos;
            }
        }
    }

    printf("%d\n", count);


    return 0;
}
#endif
