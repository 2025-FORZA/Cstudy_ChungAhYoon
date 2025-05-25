// c 10809
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[101];
    int alp[26];

    for (int i = 0; i < 26; i++) {
        alp[i] = -1;
    }
    
    scanf("%s", S);
    
    for (int i = 0; i < strlen(S); i++) {
        int ind = S[i] - 'a';
        if (alp[ind] == -1) {
            alp[ind] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alp[i]);
    }
    return 0;
}
#endif
