// c 1264
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[256] = { 0 };
	int n = 0;

	while (1) {
		gets(str);

		if (str[0] == '#')
			break;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == 'a' || str[i] == 'A') n++;
			else if (str[i] == 'e' || str[i] == 'E') n++;
			else if (str[i] == 'i' || str[i] == 'I') n++;
			else if (str[i] == 'o' || str[i] == 'O') n++;
			else if (str[i] == 'u' || str[i] == 'U') n++;
		}
		printf("%d\n", n);
		n = 0;
	}

	return 0;
}
#endif