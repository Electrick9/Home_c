#include <stdio.h>

int main ()
{
    int a,b,s=0;
    scanf("%d%d",&a,&b);

    while (a<=b)
    {
        s+=a*a;
        a++;
    }
    printf("%d", s);
    return 0;

}

