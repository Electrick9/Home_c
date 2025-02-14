#include <stdio.h>

int power(int a, int b)
{
    int a_1 = a;
    if (b == 0)
    {
        a=1;
        return a;
    }
    else
    {
        for(int i = 1; i < b; i++)
            a_1 *= a;
        return a_1;
    }
}

int main ()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d", power(n,k));
    return 0;
}
