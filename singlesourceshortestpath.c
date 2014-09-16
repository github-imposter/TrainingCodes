#include<stdio.h>
#include<stdlib.h>

#define S 10
int ad[S][S];
int visited[S][S];

int shrt[S]={0};

int min= ~0;


int shortpath(int source,int dest)
{

	return 
}

int main()
{
	int i,j,k;
	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
			ad[i][j]=0;
			visited[i][j]=0;
		}
	}

	int input[]={0,1,10,0,2,5,1,2,2,2,1,3,1,3,1,2,3,9,2,4,2,3,4,4,4,3,6,4,0,7};

	for( k=0;k<30;k=k+3)
	{

		ad[input[k]][input[k+1]]=input[k+2];
	}

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %d \t ",ad[i][j]);
	
		}
		printf("\n");
	}
	int source;
	for(source=0;source<S;source++)
	{
	for(i=0i<S;i++)
	{
		if(source==i)
			continue;
		min=~0;
		strt[source][i]= shortPath(source,i);
	}

	}
	return 0;

}

