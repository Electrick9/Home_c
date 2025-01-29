#include <stdio.h>

int main()
{
	float x1,x2,y1,y2,k,b;
			
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	k = (y1 - y2) / (x1 - x2);
    b = y2 - k * x2;
    printf("%.2f %.2f",k,b);		    
	return 0;
}

