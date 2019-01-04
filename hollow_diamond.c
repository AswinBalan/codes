#include<stdio.h>
int main(int argc, char const *argv[])
{
    //hollow -diamond
/*
    9
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/
    int i,j,n,k=0,flag=0;
    printf("Enter an odd number:\t");
    //only odd numbers :)
    scanf("%d",&n);
    //only n/2 times
    //'flag' to stop repeating pattern @middle
    for(i=0;i<=(n/2-flag);i++) 
    {
        //print n times *
        for(j=0;j<n;j++) 
        {
            //expanding and narrowing spaces from center column, in both direction, like '/\' and '\/'
            if(j> (n/2-k) && j<(n/2+k))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        // condition to re-use the loop :)
        if (i==n/2 && flag == 0){
            flag = 1;
            k--;
            i = -1;}
        //Condition to stop the loop after reuse(only one re-use) 
        else if(i==n/2 && flag==1)
            break;
        // condition for upper part
        else if(flag==0)
            k ++;
        //condition for lower part
        else if(flag==1)
            k--;
    //O(N^2)
    }
    return 0;
}
