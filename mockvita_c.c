#include<stdio.h>
int main()
{
	int s,r,i,j,k=0,a[100],v=0,inc =0,b[100],c[100];
	scanf("%d %d",&s,&r);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<(r*2);i++)
		{
             scanf("%d",&b[i]);
		}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			if((a[j] >= b[i+v]) && (a[j] <= b[i+v+1]))
			{
				inc ++;
			}
		}
		if(inc !=0){
		    c[k]=inc;
		    k++;
		}
		inc =0 ;
		v=1;
	}
	for(i=0;i<k;i++)
	   printf("%d\n",c[i]);
	return (0);
}