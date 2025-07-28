// c 2947
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        int a = 1;
        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                a = 0;

                for (int j = 0; j < 5; j++) {
                    printf("%d ", arr[j]);
                }
                printf("\n");
            }
        }
        if (a) {
            break;
        }
    }

    return 0;
}
#endif

