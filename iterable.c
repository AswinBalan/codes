#include<stdio.h>
#include<string.h>
#include<math.h>

void recurNum(int n)
{
    int i=0,base=-1,num =n, sum=0;
 
    while(n >0)
    {
        if(n%10 > base)
        {
            base = (n%10)+1;
            
        }
        n = n/10;
        // printf("n %d\t",n);
    }

    while(num >0)
    {
    sum =  sum + (num%10 * pow(base,i++));
    num = num/10;
    }
    if(base ==10 || base >= sum)
    {
    printf("%d",sum);
    return ;
    }
    
    // printf("sum %d\t",sum);
    recurNum(sum);
}

void recurCall(int len,char num_arr[], int base)
{
    int i,index,num=0;
    for(i=0;i<len;i++)
    {
        if(num_arr[i] > base)
            base = num_arr[i];
    }
    base = (base >= 48 && base <= 57) ? (base-48)+1 : (base-65) + 11;
    // printf("%d\t",base);
    if(base ==10 && (base >= 48 && base <= 57))
    {
    printf("%s",num_arr);
    return ;
    }
    int j=0;
    for(i=len-1;i >=0; i--)
    {
        index = (int)num_arr[j] <= 57 ? (num_arr[j]-48) : (num_arr[j]-65) + 10;
        j++;
        num =num + (index * pow(base,i));
    }
    // printf("\t%d\t",num);
    recurNum(num);
}
int main()
{
    char num_arr[6];

    int i, base = -1;
    scanf("%s",num_arr);
    int len = strlen(num_arr);
    if(len ==1)
      printf("%c",num_arr[0]);
    else
    recurCall(len, num_arr, base);

    return 0;
}