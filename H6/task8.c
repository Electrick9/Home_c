#include <stdio.h>

void magnifier(char a)
{
    char b;

    if ((a>='a') && (a<='z'))
        b=(a-32);
    else
        b=a;

    printf("%c",b);
}

int main()
{
    char inp;

    while (1)
    {
        scanf("%c",&inp);
        if (inp=='.')
            break;
        magnifier(inp);
    }

    return 0;
}

