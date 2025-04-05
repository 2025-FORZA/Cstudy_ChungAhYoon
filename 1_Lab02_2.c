// c 10430
#if 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{   int D, E, F;
    scanf("%d %d %d",&D,&E,&F);

    printf("%d\n", (D+E)%F);
    printf("%d\n", ((D%F)+(E%F))%F);
    printf("%d\n", (D*E)%F);
    printf("%d\n", ((D%F)*(E%F))%F);


    return 0;
}
#endif