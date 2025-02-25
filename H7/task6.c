#include <stdio.h>


void reverse_string()
{
    char ch = getchar();

    if (ch != '.')
    {
        reverse_string();
        putchar(ch);
    }
}

int main()
{
    reverse_string();

    return 0;
}
