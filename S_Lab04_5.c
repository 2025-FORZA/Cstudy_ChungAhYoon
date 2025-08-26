// c 1427
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char number[11];
    scanf("%s", number);

    int len = strlen(number);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (number[i] < number[j]) {
                char temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("%s\n", number);

    return 0;
}
#endif

