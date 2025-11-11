//c 1158
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k;
	int arr[5000];
	int index = 0;
	int cnt = 0;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	printf("<");

	while (cnt < n) {
		int step = 0;
		while (step < k) {
			if (arr[index] != 0)step++;
			if (step == k)break;
			index = (index + 1) % n;
		}

		printf("%d", arr[index]);
		arr[index] = 0;
		cnt++;

		if (cnt < n)printf(", ");

		while (arr[(index + 1) % n] == 0 && cnt < n)
			index = (index + 1) % n;
		index = (index + 1) % n;
	}

	printf(">\n");

	return 0;
}
#endif