#include<stdio.h>
#include<string.h>
//finding the maximum repeated character
int main()
{
    char str[100],alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i=0,max=0,index_arr[26] ={0},ascii = 0,index = 0;
    //Enter the string - spaces allowed
    scanf("%[^\n]s",str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i] != ' ')
            ascii = str[i];

        index_arr[ascii - 97] = index_arr[ascii - 97] + 1;

        if(max <= index_arr[ascii- 97])
        {
            max = index_arr[ascii-97];
            index = (ascii- 97);
        } 
    }
    
    printf("The maximum times repeated charater is %c",alpha[index]);
    return (0);
}
