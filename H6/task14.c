#include <stdio.h>

void sum(unsigned int a)
{
    int sum = 0;

    while (a > 0)  {
        sum += a%10;
        a /= 10;
    }
    if(sum%2==0)
        printf("YES");
    else
        printf("NO");
}

int main ()
{
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}
