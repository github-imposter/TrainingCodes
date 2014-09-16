#include<stdio.h>
#include<stdlib.h>
int heapify(int *,int,int);
int min(int *,int);
int swap(int *,int,int);
int left(int i)
{
	return 2*i+1;
}

int right(int i)
{
	return 2*i+2;
}

int parent(int i)
{
	return i/2 ;
}
int main()
{
	int length=6;
	int a[8]={4,2,7,9,3,1,-1,-1};
	for(int j=0;j<length;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n");
	for(int k=length/2;k>=0;k--)
	{
		heapify(a,length,k);
	}


	for(int j=0;j<length;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n");
	return 0;
}

int min(int *arr,int i)
{
	if(arr[i]<arr[i+1])
	{
		return i;
	}
	else
	{
		return i+1;
	}
}

int swap(int *arr ,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	return 0;
}

int heapify(int *arr,int n,int index)
{
	if(left(index)>=n && right(index)>=n)
		return 0;
	else if(right(index)>=n)
	{
		if(arr[index]>arr[left(index)])
		{
			swap(arr,index,left(index));
			heapify(arr,n,left(index));
		}
	}
	else
	{
		if(arr[index]>arr[min(arr,left(index))])
		{
			swap(arr,index,min(arr,left(index)));
			heapify(arr,n,min(arr,left(index)));
		}
	}

	return 1;

}
