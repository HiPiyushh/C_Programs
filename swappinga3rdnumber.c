  #include<stdio.h>
  #include<conio.h>
  #include<math.h>

  void main();
{
    int x,y,t ;
    clrscr();
    printf("enter the numbers:");
    scanf("%d %d",&x, &y);
    printf("\nX=%d and Y=%d" x,y );
    t=x;
    x=y;
    y=t;
    printf("\nafter swapping , x=%d and y=%d"x,y);
    getch()
}   

