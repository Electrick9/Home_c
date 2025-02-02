#include <stdio.h>

int main(void)
{
    int a,b,sq;
    scanf("%d %d", &a, &b);
    while (a<=b)
    {
        sq = a*a;
        printf("%d ",sq);
        a++;
    }
    return 0;

}
