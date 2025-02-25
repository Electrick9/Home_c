#include <stdio.h>

void rec(int n, int k)
{
    if (n>k)
        rec(n, k + 1);
    else if (n<k)
        rec(n, k - 1);
    printf("%d ",k);
}
int main(void)
{
    int a,b;
    scanf ("%d%d", &a,&b);
    rec(a,b);
    return 0;
}
