#include <stdio.h>

void middle(int a)
{
    int sum;
    for (int i=1; i<=a; i++)
    {
        sum+=i;
    }
    printf("%d",sum);


}

int main ()
{
    int n;
    scanf("%d",&n);
    middle(n);
    return 0;
}
