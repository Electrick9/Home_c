#include <stdio.h>

int middle(int a,int b)
{
    printf("%d",((a+b)/2));
    return 0;
}

int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    middle(x,y);
    return 0;
}
