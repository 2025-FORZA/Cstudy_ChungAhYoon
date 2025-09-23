// c 1453
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	int T[100];
	int seat[101] = { 0 };
	int sum = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &T[i]);
	}

	for (int i = 0; i < N; i++) {
		if (seat[T[i]] == 0) {
			seat[T[i]] = 1;
		}
		else {
			sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}
#endif