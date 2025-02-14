#include <stdio.h>

void is_happy_number (int a)
{
    int sum, pnum=1;

    while((a > 0)&&(a!=0) )
    {
        pnum*=a%10;
        sum+=a%10;
        a=a/10;
    }
    if (pnum==sum)
        printf("YES");
    else
        printf("NO");

}

int main()
{
    int n;
    scanf("%d", &n);
    is_happy_number(n);
    return 0;
}
