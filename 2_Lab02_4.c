// c 22966
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int c;
	scanf("%d", &c);

	int score, min = 4;
	char temp[11], name[11];

	for (int i = 0; i < c; i++) {
		scanf("%s %d", temp, &score);
		if (score < min) {
			min = score;
			strcpy(name, temp);
		}
	}
	printf("%s", name);

	return 0;
}
#endif