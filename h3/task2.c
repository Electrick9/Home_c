#include <stdio.h>

int main()
{
	int a,b,c;
	int max;
	scanf("%d%d%d",&a,&b,&c);
	max = a > b ? a : b;
	max = max > c ? max : c;
	printf("%d",max);
	return 0;
}

