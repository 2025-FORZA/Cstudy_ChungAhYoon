// c 1267
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	int T[20];
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &T[i]);
	}

	int Y = 0;
	int M = 0;

	for (int i = 0; i < N; i++) {
		Y += ((T[i] / 30) + 1) * 10;
		M += ((T[i] / 60) + 1) * 15;
	}

	if (Y < M) {
		printf("Y %d\n", Y);
	}
	else if (M < Y) {
		printf("M %d\n", M);
	}
	else {
		printf("Y M %d\n", Y);
	}
	return 0;
}
#endif