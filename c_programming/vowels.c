
/*write a program to count and indetify the vowel in variable*/
#include<stdio.h>
#include<string.h>
main()


{
    int i,j,count=0;
    char  str[100];

    printf("enter the word");
    scanf("%s",&(str));

    j=strlen(str);

    for(i=0;i<=j;i++)
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')

           {count++;

            printf("The character is vowel %c\n",str[i]);
            printf("%d",count);
           }
         else
         {
            printf("character is not vowel %c\n",str[i]);
         }
    }
    }
