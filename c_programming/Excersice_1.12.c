
/*write a program  which will prints its input one word per line  */
#include<stdio.h>

main()

{

int input;

while((input=getchar())!=EOF)
    {
       if(input==' ')
        {
            putchar('\n');
        }
        else
           {
          putchar(input);
           }
     }

}

