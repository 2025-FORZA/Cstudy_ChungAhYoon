// c 2751
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k(const void* a, const void* b) {
    int x = *(int*)a, y = *(int*)b;
    return x - y;
}
int arr[1000000];

int main(void)
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), k);
    for (i = 0; i < n; i++) printf("%d\n", arr[i]);
    return 0;

}
#endif

