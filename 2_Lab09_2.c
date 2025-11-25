// c 1924
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    char* week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    scanf("%d %d", &x, &y);

    int total = 0;

    for (int i = 0; i < x - 1; i++) {
        total += days[i];
    }

    total += y;

    int index = total % 7;

    printf("%s\n", week[index]);



	return 0;
}
#endif