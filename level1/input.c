#include<stdio.h>

int main(){

    // for input number 

    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    printf("Your number is %d ", num);


    // for input float

    float lake;

    printf("\nEnter the float value : ");
    scanf("%f",&lake);

    printf("\nFLoat value is : %f",lake);

    // for double 

    double bigvalue;

    printf("\n Enter the big value : ");
    scanf("%lf",&bigvalue);

    printf("\n Your Big Value : %lf",bigvalue);

    // for character 

    char ch;

    printf("\nEnter your first character : ");
    scanf("%c",& ch);

    printf("\nYour first charcter is : %c",ch);


    // print 10% 20% in 2 method 

    int n1,n2;
    char p;
    printf("Enter 10%% and 20%% : ");
    scanf("%d%c %d%c",&n1,&p,&n2,&p);
    printf("%d%p %d%p",n1,n2);


    // another method 

    int n3,n4;

    printf("enter number : ");
    scanf("%d%% %d%%");
    printf(%d %d,n3,n4);

}

