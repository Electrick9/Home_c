#include <stdio.h>



int main(void)
{
    int a,b=0;
    scanf(" %d", &a);

    do
        b=b*10+a%10;
    while (a/=10);

    printf("%d",b);
    return 0;
}










