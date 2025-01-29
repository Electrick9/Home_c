#include <stdio.h>

int main()
{
	int a,b,c;
			
	scanf("%d%d%d",&a,&b,&c);
	
	if ((a==b) && (b==c))
	   printf("NO");
	else    
	   a<=b && b<=c ? printf("YES") : printf("NO");		    
	
	return 0;
}

