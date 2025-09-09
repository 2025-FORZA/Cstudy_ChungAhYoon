// c 4673
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main(void)
{
	int arr[10001] = { 0 };

	for (int i = 1; i <= 10000; i++) {
		int result = d(i);
		if (result <= 10000) {
			arr[result] = 1;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
#endif