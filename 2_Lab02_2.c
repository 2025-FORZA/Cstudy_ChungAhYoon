// c 2581
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M, N, i, j;
	int sum = 0;
	int min = 0;
	
	scanf("%d", &M);
	scanf("%d", &N);

	for (i = M; i <= N; i++) {
		int count = 0;

		if (i == 1) {
			continue;
		}

		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		if (count == 0) {
			sum = sum + i;
			if (min == 0) {
				min = i;
			}
		}
	}

	if (sum == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	
	return 0;
}
#endif