// c 23037
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int num[5];
	for (int i = 0; i < 5; i++) {
		scanf("%1d", &num[i]);
	}
	int result = 0;
	for (int i = 0; i < 5; i++) {
		result += (int)pow(num[i], 5);
	}
	printf("%d\n", result);
	return 0;
}
#endif