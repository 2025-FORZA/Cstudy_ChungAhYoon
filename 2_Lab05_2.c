//c 5354
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t;
	scanf("%d", &t);
	
    for (int b = 0; b < t; b++) {
        int n;
        scanf("%d", &n);

        if (n == 1) {        
            printf("#\n\n");
            continue;
        }

        for (int i = 0; i < n; i++) {
            printf("#");
        }
        printf("\n");

        for (int i = 0; i < n - 2; i++) {
            printf("#");

            for (int j = 0; j < n - 2; j++) {
                printf("J");
            }
            printf("#\n");
        }

        for (int i = 0; i < n; i++) {
            printf("#");
        }
        printf("\n\n");
    }
	return 0;
}
#endif