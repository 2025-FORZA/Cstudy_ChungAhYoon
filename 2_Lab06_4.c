//c 10773
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000000

typedef struct Stack {
	int stack[MAX];
	int top;
}Stack;

void push(Stack* s, char c) {
	if (s->top < MAX - 1) {
		s->stack[++(s->top)] = c;
	}
}

char pop(Stack* s) {
	if (s->top > -1) {
		return s->stack[(s->top)--];
	}
	return'\0';
}

int main(void)
{
	int K, n;
	struct Stack s = { {0},-1 };
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &n);
		if (n == 0)pop(&s);
		else push(&s, n);
	}
	int total = 0;
	for (int i = 0; i <= s.top; i++) {
		total += s.stack[i];
	}
	printf("%d\n", total);

	return 0;
}
#endif