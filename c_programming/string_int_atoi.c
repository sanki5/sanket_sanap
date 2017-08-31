/*write a program to convert the string to integer*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()

{
int x=0,y;
char str[100];
printf("enter the string number");
scanf("%s",str);

x=atoi(str);

printf("%d\n",x);

y=x+100;

printf("This is cross check for integer conversion %d",y);



}
