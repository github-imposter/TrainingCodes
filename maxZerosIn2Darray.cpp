#include<stdio.h>
#include<stdlib.h>

int main()
{
	int maxcount=0;
	int a[6][6]={   {1,1,1,0,0,0},
				    {1,1,1,1,0,0},
			    	{1,1,0,0,0,0},
				    {1,1,1,1,0,0},
					{1,1,1,0,0,0},
					{1,1,1,1,0,0} } ;

	int i=0,j,count=0;
	
		for(j=5;j>=0;j--)
		{
			if(i>=6)
			{
				break;
			}
			if(a[i][j]!=0)
			{
				i++;
				j++;
			}
			else
			{
				count++;
			}
				
		}
	

	printf("the max no of zero in a any particular row is : %d ",count);

	return 0;
}
