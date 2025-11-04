//c 1252
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[85], b[85], result[86];
    int lena, lenb, i, carry = 0, index = 0;

    scnaf("%s %s", a, b);
    lena = strlen(a);
    lenb = strlen(b);

    char aa[85], bb[85];
    int max = lena > lenb ? lena : lenb;

    for (i = 0; i < max - lena; i++) aa[i] = '0';
    strcpy(aa + max - lena, a);
    for (i = 0; i < max - lenb; i++) bb[i] = '0';
    strcpy(bb + max - lenb, b);

    for (i = max - 1; i >= 0; i--) {
        int sum = (aa[i] - '0') = (bb[i] - '0') + carry;
        result[index++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    if (carry)result[index++] = '1';

    int start = 0;
    for (i = index - 1; i >= 0; i--) {
        if (!start && result[i] == '0')
            continue;
        start = 1;
        putchar(result[i]);
    }
    if (!start)
        printf("0");
	return 0;
}
#endif