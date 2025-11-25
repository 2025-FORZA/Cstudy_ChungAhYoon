// c 31495
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[102];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);

    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    if (len < 2) {
        printf("CE\n");
        return 0;
    }

    if (s[0] != '"' || s[len - 1] != '"') {
        printf("CE\n");
        return 0;
    }

    if (len == 2) {
        printf("CE\n");
        return 0;
    }

    for (int i = 1; i < len - 1; i++) {
        putchar(s[i]);
    }
    putchar('\n');
	return 0;
}
#endif