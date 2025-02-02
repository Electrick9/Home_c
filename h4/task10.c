#include <stdio.h>


int main()
{
    int n,i,i_1,s=0;
    scanf("%d",&n);

    while(n)
    {
        i=n%10;
        n/=10;
        i_1=n%10;
        if (i_1>=i)
            s++;
    }
    if(s>0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
