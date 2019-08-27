#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,flag=0,sum2=0,b=0,sum=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	//printf("%d ",sum);	
	for(i=0;i<n;i++)
	{
	 sum2=sum2+a[i][i];
	 b=b+a[i][n-i-1];				
    }
	//	printf("%d ",b);
		printf("%d",abs(sum-b));			
}
