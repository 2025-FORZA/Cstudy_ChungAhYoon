// c 2941
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char word[101];
    scanf("%s", word);

    int len = strlen(word);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (word[i] == 'c' && i + 1 < len) {
            if (word[i + 1] == '=' || word[i + 1] == '-') {
                i++;
            }
        }
        else if (word[i] == 'd' && i + 1 < len) {
            if (word[i + 1] == 'z' && i + 2 < len && word[i + 2] == '=') {
                i += 2;
            }
            else if (word[i + 1] == '-') {
                i++;
            }
        }
        else if (word[i] == 'l' && i + 1 < len && word[i + 1] == 'j') {
            i++;
        }
        else if (word[i] == 'n' && i + 1 < len && word[i + 1] == 'j') {
            i++;
        }
        else if (word[i] == 's' && i + 1 < len && word[i + 1] == '=') {
            i++;
        }
        else if (word[i] == 'z' && i + 1 < len && word[i + 1] == '=') {
            i++;
        }
        count++;
    }
    printf("%d\n", count);

    return 0;
}
#endif

