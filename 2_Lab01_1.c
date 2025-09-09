// c 1439
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100001];
    int zero = 0, one = 0;
    scanf("%s", s);

    if (s[0] == '0') zero++;
    else one++;

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] != s[i - 1]) {
            if (s[i] == '0') zero++;
            else one++;
        }
    }

    if (zero < one)
        printf("%d\n", zero);
    else
        printf("%d\n", one);

	return 0;
}
#endif