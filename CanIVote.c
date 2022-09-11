#include<conio.h>
#include<stdio.h>

int main(){
    
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("You can Vote!");
    } else
    {
        printf("You can't Vote!");
    }
    

    return 0;
}
