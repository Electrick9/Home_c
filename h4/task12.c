#include <stdio.h>



int main()
{
    int min=9, max=0, a, b;
    scanf(" %d", &a);
    while (a>0)
    {
        b=a%10;
        if (b>max) max=b;
        if (b<min) min=b;
        a/=10;
        
    }
    printf("%d %d\n",min, max);
    return 0;
}










