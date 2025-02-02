#include <stdio.h>

int main(void)
{
    int sqr,cb,n;
    scanf("%d", &n);
    for (int i = 1; i <= n && n<=100; i++) 
    {
        sqr = i * i;       
        cb = sqr * i;      
        printf("%d %d %d \n ",i,sqr,cb);
    }
    return 0;

}
