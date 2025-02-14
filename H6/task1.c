#include <stdio.h>
#include <math.h>

int ab (int a)
{
    printf("%d",abs(a));
    return a;
}

int main()
{
    int a;
    scanf("%d",&a);
    ab(a);
    return 0;
}
