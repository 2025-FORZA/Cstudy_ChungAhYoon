// c 1652
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	char room[100][100];

	for (int i = 0; i < N; i++) {
		scanf("%s", room[i]);
	}

	int width = 0, height = 0;

	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (room[i][j] == '.') {
				count++;
			}
			else {
				if (count >= 2) width++;
				count = 0;
			}
		}
		if (count >= 2) width++;
	}

	for (int j = 0; j < N; j++) {
		int count = 0;
		for (int i = 0; i < N; i++) {
			if (room[i][j] == '.') {
				count++;
			}
			else {
				if (count >= 2) height++;
				count = 0;
			}
		}
		if (count >= 2) height++;
	}

	printf("%d %d\n", width, height);

	return 0;
}
#endif