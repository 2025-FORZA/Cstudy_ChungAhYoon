// c 10818
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{ 
    int n, input;
    scanf("%d", &n);

    int min = 1000000; 
    int max = -1000000; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        
        if (input >= max) {
            max = input;
        }
        if (input <= min) {
            min = input;
        }
    }
    printf("%d %d\n", min, max);

    return 0;
}
#endif

