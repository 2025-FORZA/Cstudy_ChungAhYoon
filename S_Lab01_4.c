// c 1855
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    char input[201];
    char graph[21][201];

    scanf("%d", &n);
    scanf("%s", input);

    int L = strlen(input);
    int a = 0;

    for (int i = 0; i < L / n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                graph[i][j] = input[a++];
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                graph[i][j] = input[a++];
            }
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < L / n; i++) {
            printf("%c", graph[i][j]);
        }
    }

    return 0;
}
#endif

