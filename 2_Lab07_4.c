//c 2606
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int graph[101][101];
int visit[101];
int n, m, count = 0;

void dfs(int v) {
	visit[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (graph[v][i] == 1 && !visit[i]) {
			count++;
			dfs(i);
		}
	}
}

int main(void)
{
	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a][b] = graph[b][a] = 1;
	}

	dfs(1);
	printf("%d\n", count);

	return 0;
}
#endif