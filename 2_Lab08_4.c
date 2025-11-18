// c 4344
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int C;
	scanf("%d", &C);

	while (C--) {
		int N;
		scanf("%d", &N);

		int scores[N];
		int sum = 0;

		for (int i = 0; i < N; i++) {
			scanf("%d", &scores[i]);
			sum += scores[i];
		}

		double average = (double)sum / N;

		int count = 0;
		for (int i = 0; i < N; i++) {
			if (scores[i] > average) {
				count++;
			}
		}
		double ratio = (double)count / N * 100;
		printf("%.3lf%%\n", ratio);
	}

	return 0;
}
#endif