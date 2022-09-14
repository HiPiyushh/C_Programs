#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
printf("enter principal amount Rate and time (in years):");
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
printf("\nSimple interest on Rs.%f at rate %f after %f years is Rs.%f",p,r,t,si);
getch() ;
}


