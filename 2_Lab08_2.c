// c 1672
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    char dna[1000001];
    char map[4][4] = {
        {'A','C','A','G'},
        {'C','G','T','A'},
        {'A','T','C','G'},
        {'G','A','G','T'}
    };

    scanf("%d", &N);
    scanf("%s", dna);

    for (int i = N - 2; i >= 0; i--) {
        int a, b;

        if (dna[i] == 'A') a = 0;
        else if (dna[i] == 'G') a = 1;
        else if (dna[i] == 'C') a = 2;
        else a = 3;

        if (dna[i + 1] == 'A') b = 0;
        else if (dna[i + 1] == 'G') b = 1;
        else if (dna[i + 1] == 'C') b = 2;
        else b = 3;

        dna[i] = map[a][b];
    }

    printf("%c\n", dna[0]);

	return 0;
}
#endif

