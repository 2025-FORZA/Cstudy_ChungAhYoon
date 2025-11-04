//c 9012
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

typedef struct Stack {
	char stack[MAX];
	int top;
}Stack;

void init(Stack* s) {
	s->top = -1;
}

int is_empty(Stack* s) {
	return s->top == -1;
}

void push(Stack* s, char c) {
	if (s->top < MAX - 1) {
		s->stack[++(s->top)] = c;
	}
}

char pop(Stack* s) {
	if (!is_empty(s)) {
		return s->stack[(s->top)--];
	}
	return'\0';
}

int main(void)
{
	int T;
	scanf("%d", &T);

	while (T--) {
		char ps[51];
		scanf("%s", ps);

		Stack s;
		init(&s);
		int is_valid = 1;

		for (int i = 0; ps[i] != '\0'; i++) {
			if (ps[i] == '(') {
				push(&s, ps[i]);
			}
			else if (ps[i] == ')') {
				if (is_empty(&s)) {
					is_valid = 0;
					break;
				}
				pop(&s);
			}
		}
		if (!is_empty(&s)) {
			is_valid = 0;
		}
		if (is_valid) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
#endif