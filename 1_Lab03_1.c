// c 2480
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	int max;

	   

	if (x == y && y == z)
	{
		printf("%d\n", 10000 + x * 1000);
	}
	else if (x == y && y != z)
	{
		printf("%d\n", 1000 + x * 100);
	}
	else if (z == y && y != x)
	{
		printf("%d\n", 1000 + z * 100);
	}
	else if (x == z && z != y)
	{
		printf("%d\n", 1000 + x * 100);
	}
	else
	{
		if (x > y && x > z)
			max = x;
		else if (y > z && y > x)
			max = y;
		else if (z > y && z > x)
			max = z;
		printf("%d\n", max * 100);
	}
		

    return 0;
}
#endif
