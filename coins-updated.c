#include<stdio.h>

int main()
{
  int rupees,five =0, two =0, one =0;
  scanf("%d",&rupees);
  if(rupees ==1)
    {
       printf("%d %d %d %d",1,0,0,1);
       return 0;
    }
  else if(rupees == 2)
  {
       printf("%d %d %d %d",2,0,0,2);
       return 0;
  }
  else if(rupees == 3)
  {
       printf("%d %d %d %d",2,0,1,1);
       return 0;
  }
  
  else
  {
      int mul =0;
      int cond=0;
     //  while(rupees >= cond)
     //  {
     //      cond =  4+(mul*5);
     //       mul ++;
     //  }
     //  int diff =  5-(cond - rupees);

     int iter = ((rupees-4)/5);
     int diff =  ((rupees-4)%5);
    // int result = iter + diff;
     //printf("%d ",result);
     //return 0;

    if(diff == 0)
    {
       printf("%d %d %d %d",iter+3,iter,1,2);
       return 0;
    }
    else if(diff == 1)
    {
     printf("%d %d %d %d",iter+3,iter,2,1);
       return 0;
    }
    else if(diff == 2)
    {
       printf("%d %d %d %d",iter+4,iter,2,2);
       return 0;
    }
    else if(diff == 3 )
     {
       printf("%d %d %d %d",iter+4,iter,3,1);
       return 0;
     }
     else if(diff == 4)
     {
       printf("%d %d %d %d",iter+5,iter,3,2);
       return 0;

     }
  }
  return 0;
}

/*
---------
Rs. 5 2 1
1 - 0,0,1
2 - 0,0,2
3 - 0,1,1
---------
4 - 0,1,2
5 - 0,2,1
6 - 0,2,2
7 - 0,3,1
8 - 0,3,2
---------
9 - 1,1,2
10- 1,2,1
11- 1,2,2
12- 1,3,1
13- 1,3,2
---------
14- 2,1,2
15- 2,2,1
16- 2,2,2
17- 2,3,1
18- 2,3,2
---------
19- 3,1,2
.....
.....

 */