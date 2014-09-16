#include <stdio.h>
#include <stdlib.h>

int main()
{
	int test_case, N, i;
	int Num[1000];
	int count[201];
	
	for(test_case=0; test_case<5; test_case++)
	{
		for(i=0; i<1000; i++)
			Num[i] = 0;

		scanf("%d", &N);
		for(i=0; i<1000; i++)
			scanf("%d", &Num[i]);

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Your Algotirhm
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		for(i=0;i<201;i++)
		{
			count[i]=0;
		}

		for(i=0;i<1000;i++)
		{
			count[Num[i]]++;
			//printf("-------- the %d of  %d \n",Num[i],count[Num[i]]);
		}
		int max=0;
		int index=0;
		for(i=0;i<200;i++)
		{
			if(max<=count[i])
			{
				if(max==count[i])
				{
					index=i;
				}
				else
				{
					max=count[i];
					index=i;
				}
			}
		}

		printf("#%d %d\n",test_case+1,index);
	}	

	return 0;
}
