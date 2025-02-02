#include <stdio.h>



int main()
{
    int a,i,k;
    scanf(" %d", &a);
    for (i=2; i<=a/2; i++)
    {
        k=a%i;
        if (k==0) break;
    }
    if (i>(a/2) && a!=1)
        printf("YES");
    else
        printf("NO");
    return 0;
}










