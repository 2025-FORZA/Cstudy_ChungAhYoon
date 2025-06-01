// c 7568
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n;
    int weight[50], height[50];
    int rank[50];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1;
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", rank[i]);
    }
    return 0;
}
#endif
