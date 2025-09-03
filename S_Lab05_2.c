// c 17173
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m;
    int arr[10000];
    long long result = 0;  /

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    for (int num = 1; num <= n; num++) {
        for (int j = 0; j < m; j++) {
            if (arr[j] != 0 && num % arr[j] == 0) {  
                result += num;
                break;  
            }
        }
    }

    printf("%lld\n", result);


	return 0;
}
#endif