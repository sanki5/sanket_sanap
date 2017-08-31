/*write program to draw histograam*/

#include<stdio.h>

int main(void)
{

int c;

while((c=getchar())!=EOF)
{
    if(c==' ' || c=='\n' || c=='\t')

    {
        putchar('\n');

    }
    else
    {
      putchar('*');
    }
}


}
