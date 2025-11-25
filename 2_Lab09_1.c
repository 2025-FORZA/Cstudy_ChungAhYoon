// c 1032
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    char pattern[51];
    char temp[51];

    scanf("%d", &N);
    scanf("%s", pattern);

    for (int i = 1; i < N; i++) {
        scanf("%s", temp);

        for (int j = 0; pattern[j] != '\0'; j++) {
            if (pattern[j] != temp[j]) {
                pattern[j] = '?';
            }
        }
    }

    printf("%s\n", pattern);
    return 0;
}
#endif