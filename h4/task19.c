#include <stdio.h>



int main()
{
    int a,i;
    scanf(" %d", &a);
    i=0;
    do
    {
        i+=a%10;
    }
    while(a/=10);
    if (i!=10)
        printf("NO");
    else
        printf("YES");

    return 0;
}










