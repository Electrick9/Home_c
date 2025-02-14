#include <stdio.h>

void factorial(unsigned int a)
{
    unsigned int f=1;
    for (unsigned int i=1; i<=a; i++)
    {
        f*=i;
    }
    printf("%u",f);


}

int main ()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}
