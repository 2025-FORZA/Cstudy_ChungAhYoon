//c 11727
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int dp[1001];

    dp[1] = 1;
    dp[2] = 3;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
    }
    printf("%d\n", dp[n]);
    return 0;
}
#endif

