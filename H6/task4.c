#include <stdio.h>

int fnc(int x)
{
    int result;

    if ((x>=-2)&&(x<2))
        result=x*x;
    if (x>=2)
        result=x*x+4*x+5;
    if (x<-2)
        result=4;
    return result;
}

int main()
{
    int n=1,k,j=0;
    while (n!=0)
    {
        scanf("%d", &n);
        k=fnc(n);
        if (k>j)
            j=k;
    }
    printf("%d ",j);
    return 0;

}
