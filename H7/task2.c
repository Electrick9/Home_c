#include <stdio.h>

int rec(int n)
{
    if(n == 1)
        return 1;
    return n + rec(n-1);
}
int main(void)
{
    int a;
    scanf ("%d", &a);
    printf("%d",rec(a));
    return 0;
}

