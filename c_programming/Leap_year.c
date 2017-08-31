
/*write a program to check whether input year is leap or not*/
#include<stdio.h>

main()


{

    int c;

    printf("enter the year ");
    scanf("%d",&c);

    if(c%400==0)
        {
             printf("this is leap year");
        }
    else if(c%100==0)
        {
             printf("this is not leap year");
        }
    else if(c%4==0)
        {
           printf("this is  leap year");
        }
     else
        {

        printf("this is not leap year");
        }

}
