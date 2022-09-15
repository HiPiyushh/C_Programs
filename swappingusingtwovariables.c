#include<stdio.h>
#include<math.h>
void main()
{       int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("\nX=%d and Y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping, X=%d and Y=%d",x,y);
	return 0;
}