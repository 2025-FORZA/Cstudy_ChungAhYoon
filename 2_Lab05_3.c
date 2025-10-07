//c 1434
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,m;
	scanf("%d %d", &n, &m);

	int a = 0, b = 0;
	int x;
	while (n--) {
		scanf("%d", &x);
		a += x;
	}
	while (m--) {
		scanf("%d", &x);
		b += x;
	}
	printf("%d", a - b);
	return 0;
}
#endif