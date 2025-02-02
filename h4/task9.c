#include <stdio.h>



int main(void)
{
    int a,i=0,i_1=0;
    scanf("%d", &a);

    while (a>0)
    {
        if (a%2 == 0) // Проверка на чётность
        {
            i++;
            a/=10;
        }
        else
        {
            i_1++;
            a/=10;
        }
    }
    if ((i!=0)&&(i_1==0))
        printf("YES");
    else
        printf("NO");
    return 0;
}










