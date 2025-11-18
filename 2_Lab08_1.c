// c 10820
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[110]; 

    while (fgets(str, sizeof(str), stdin) != NULL)
    {
        int lower = 0; 
        int upper = 0; 
        int num = 0;
        int space = 0; 

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                lower++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                upper++;
            else if (str[i] >= '0' && str[i] <= '9')
                num++;
            else if (str[i] == ' ')
                space++;
        }

        printf("%d %d %d %d\n", lower, upper, num, space);
    }

    return 0;
}
#endif