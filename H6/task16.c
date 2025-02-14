#include <stdio.h>

void is_prime (int a)
{
    int k,i;
    for ( i=2; i<=a/2 ; i++)
    {
        k=a%i;
        if (k==0) break;
    }
    if (i>(a/2) && a!=1 && a!=0)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    int n;
    scanf("%d", &n);
    is_prime(n);
    return 0;
}
