
/* write program to count the repetaion of character in word */

#include <stdio.h>

main()
{   int count=0;
    char c;
    char str[100];
    int i=0;

     printf("enter the string whichever you want ?");
     scanf("%s",&str);

     printf("enter the character of which frequency u have find?");
     scanf("%s",&c);




    if (i<=strlen(str))
{
    while (str[i]!='\0')
    {

        if (c==str[i])

        {
            count++;

        }


        i++;
    }
    printf("%d",count);
}

}
