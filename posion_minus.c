#include <stdio.h>
#include <math.h>

int main()
	{
	float x1,y1;
	float x2,y2;	
	float x,y;
	
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	
	x=fabs(x1-x2);
	y=fabs(y1-y2);
	
	printf("%.2f\n",x);
	printf("%.2f\n",y);
	return 0;
	}
