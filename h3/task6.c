#include <stdio.h>

int main()
{
	int a,b;
	
	scanf("%d%d",&a,&b);
	
	if (a == b)
	   printf("Equal");
	else    
	   a > b ? printf("Above\n") : printf("Less\n");
	    
    return 0;
}

