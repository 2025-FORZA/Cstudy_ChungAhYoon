// c 8958
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int T;
    char quiz[81];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", quiz);
        int score = 0;
        int total = 0;

        for (int j = 0; quiz[j] != '\0'; j++) {
            if (quiz[j] == 'O') {
                score++;
                total += score;
            }
            else {
                score = 0;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
#endif

