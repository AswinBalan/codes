#include<stdio.h>
int main(int argc, char const *argv[])
{
    int outer,inner,rows,flag =0,letter=65;
    /*enter the number of rows*/
    scanf("%d",&rows);
    for(outer=0;outer<rows;outer++)
    {
        //flag is used to alternatively print values

            for(inner=0;inner<=(rows+outer);inner++)
            {
                if(inner >= (rows-outer) && flag == 0)
                {
                    printf("*");
                    flag = 1;
                }
                // inner > (rows-outer) avoids printing 'A' in the starting of inner loop
                else if(inner > (rows-outer) && flag ==1)
                {
                   // printf("A");
                    letter =(char)letter;
                    printf("%c",letter);
                    (int)letter ++;
                    flag = 0;
                }
                else
                {
                    printf(" ");
                    //final '*' of previous iteration will give flag = 1, so..
                    flag = 0;
                }
            }
            printf("\n");
    }
    return 0;
}