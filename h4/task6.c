#include <stdio.h>


int main()
{
    int a,i=0;
    scanf("%d", &a);
    while(a)
    {
        if((a/10)%10 == a%10)
            i = 1;
        a/=10;
    }
    if(i==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
