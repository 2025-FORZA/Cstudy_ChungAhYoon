// c 1157
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000001];
	int alp[26] = { 0 };
	int i, max = 0, max_idx = 0, count = 0;
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {
		char c = word[i];

		if (c >= 'a' && c <= 'z') {
			c = c - 'a' + 'A';
		}
		alp[c - 'A']++;
	}

	for (i = 0; i < 26; i++) {
		if (alp[i] > max) {
			max = alp[i];
			max_idx = i;
			count = 1;
		}
		else if (alp[i] == max) {
			count++;
		}
	}

	if (count > 1) {
		printf("?\n");
	}
	else {
		printf("%c\n", max_idx + 'A');
	}

	return 0;
}
#endif