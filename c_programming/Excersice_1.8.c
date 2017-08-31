
/*Excersice_1_8 :: Count the blanks ,space and newline in file */

#include<stdio.h>
main()
{

    int input;
    int count_space=0;
    int count_tab=0;
    int count_char=0;
    int count_newline=0;

    while((input=getchar())!=EOF)
    {
        if(input==' ')
        {
           count_space++;
            printf("space count is ::%d\n",count_space);
        }
        else if (input=='\t')
        {
            count_tab++;
            printf("tabes count is :: %d\n",count_tab);

        }
        else if (input=='\n')
        {
            count_newline++;
           printf("new line count is : %d ",count_newline);
        }
        else
        {
                count_char++;
                printf("total character count in file :: %d\n",count_char);

        }

    }
}
