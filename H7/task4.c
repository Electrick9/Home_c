#include <stdio.h>


void print_num(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
    }

    else
    {
        print_num(n / 10);
        printf("%d ", n % 10);
    }
}

int main(void)
{
    int a;

    scanf ("%d", &a);
    print_num(a);

    return 0;
}
