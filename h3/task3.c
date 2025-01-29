#include <stdio.h>

int main()
{
	int a,b,c,d;
			
	scanf("%d",&a);
	
	b= a/100;
	c= (a/10)%10;
	d= a%10;
	
	if ((b>c) && (b>d))
	   printf("%d",b);
	else if ((c>b) && (c>d))
	   printf("%d",c);
	else 
	   printf("%d",d);      
	
	return 0;
}

