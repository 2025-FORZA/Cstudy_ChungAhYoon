// c 2309
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main(void)
{
	int h[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &h[i]);
		sum += h[i];
	}

	int target = sum - 100;

	int idx1 = -1, idx2 = -1, found = 0;
	for (int i = 0; i < 9 && !found; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (h[i] + h[j] == target) {
				idx1 = i; idx2 = j;
				found = 1;
				break;
			}
		}
	}

	int real[7], k = 0;
	for (int i = 0; i < 9; i++) {
		if (i == idx1 || i == idx2) continue;
		real[k++] = h[i];
	}

	qsort(real, 7, sizeof(int), cmp);

	for (int i = 0; i < 7; i++) {
		printf("%d\n", real[i]);
	}

	return 0;
}
#endif