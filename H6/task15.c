#include <stdio.h>

void grow_up (int a)
{
    int i,i_1,s=0;

    while(a)
    {
        i=a%10;
        a/=10;
        i_1=a%10;
        if (i_1>=i)
            s++;
    }
    if(s>0)
        printf("NO");
    else
        printf("YES");

}

int main()
{
    int n;
    scanf("%d", &n);
    grow_up(n);
    return 0;
}
