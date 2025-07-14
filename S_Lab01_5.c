// c 10814
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    int age;
    char name[101];
}Member;

Member M[100001];
int age_1[201][100001];
int age_2[201];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &M[i].age, M[i].name);
        int a = M[i].age;
        age_1[a][age_2[a]++] = i;
    }
    for (int age = 1; age <= 200; age++) {
        for (int k = 0; k < age_2[age]; k++) {
            int j = age_1[age][k];
            printf("%d %s\n", M[j].age, M[j].name);
        }
    }
    return 0;
}
#endif

