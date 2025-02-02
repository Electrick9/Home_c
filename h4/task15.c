

#include <stdio.h>

int main(void)
{
    int a, i = 0;
    do
    {
        scanf("%d", &a);
        if (a%2 == 0)
            i ++;
    }
    while (a !=0);
    printf("%d", i - 1);
    return 0;

}
