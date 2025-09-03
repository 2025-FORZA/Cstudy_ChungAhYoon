// c 12760
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int card[101][101] = { 0 };
    int score[101] = { 0 };

    for (i = 1; i <= N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &card[i][j]);
        }
    }

    for (j = 0; j < M; j++) { 
        int max = -1;
        int m_player[101] = { 0 };
        int count = 0;

        for (i = 1; i <= N; i++) {
            int m_card = -1, pos = -1;
            for (int k = 0; k < M; k++) {
                if (card[i][k] > m_card) {
                    m_card = card[i][k];
                    pos = k;
                }
            }
            card[i][pos] = 0; 

            if (m_card > max) {
                max = m_card;
                count = 1;
                m_player[0] = i;
            }
            else if (m_card == max) {
                m_player[count++] = i;
            }
        }

        for (i = 0; i < count; i++) {
            score[m_player[i]]++;
        }
    }

    int m_score = 0;
    for (i = 1; i <= N; i++) {
        if (score[i] > m_score)
            m_score = score[i];
    }

    for (i = 1; i <= N; i++) {
        if (score[i] == m_score) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
#endif