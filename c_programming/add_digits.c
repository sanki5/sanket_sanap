/*this program is basically addtion of adjucent digits in number */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()

{
int i=0,len,y=0,z=0;
char x;
char str[100];
printf("enter the string number");
scanf("%s",str);

len=strlen(str);

for(i=0;i<len;i++)
{
    x=str[i];
    y=x-'0';
    z=z+y;
}

printf("%d",z);

}
