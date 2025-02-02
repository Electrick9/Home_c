#include <stdio.h>



int main(void)
{
    int a,i=0,i_1=0;
    scanf("%d", &a);

    while (a > 0)
    {
        if (a%2 == 0)// проверка на чётность числа
            i++;
        else
            i_1++;
        a/=10; 
    }
    printf("%d %d",i,i_1);
    return 0;
}
