#include<stdio.h>
#include<conio.h>
int main() {
    int year;
    printf("enter the year\n");

    scanf("%d",&year);

        if ("year % 4==0") {
            printf("%d is a leap year ", year);
        } else if ( "year % 1==0"){
            printf ("%d is not a leap year");
        } else
        {
            printf("Wrong Input");
        }
        
        return 0;
}

