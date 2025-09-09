// c 4740
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[81];

	while (1) {
		gets(str);

		if (strcmp(str, "***") == 0) break;

		for (int i = (strlen(str) - 1); i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
	}

	return 0;
}
#endif