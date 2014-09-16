#include <stdio.h>
#include <stdlib.h>


//int end[100];
int main()
{
	int test_case, N, i,j;
	int Num[100][100];
	struct pair
	{	
		int lad;
		int idx;

	}p[100];

	for(test_case=0; test_case<10; test_case++)
	{	
		for(i=0;i<100;i++)
		{
			p[i].lad=0;
			p[i].idx=0;
		}


		for(i=0; i<100; i++)
			for(j=0; j<100; j++)
				Num[i][j] = 0;

		scanf("%d", &N);
		for(i=0; i<100; i++)
			for(j=0; j<100; j++)
				scanf("%d", &Num[i][j]);


		
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		Your Algotirhm
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////
		//j=0;
		int end;
		int index=-1;
		for(j=0;j<100;j++)
		{
			if(Num[99][j]==1)
			{
				end=j;
				int ladder=1;
				int left=0;
				int right=0;
				int leftmon=0;
				int rightmon=0;
				for(i=98;i>=0;i--)
				{




					if(Num[i][end-1]==1 && !right && end!=0)
					{

						end--;
						i++;
						left=1;
						if(leftmon ^ left)
						{
							ladder++;
							leftmon=left;
						}
						
					}
					else if(end<=98 && Num[i][end+1]==1 && !left)
					{
						end++;
						i++;
						right=1;
						if(rightmon ^ right)
						{
							ladder++;
							rightmon=right;
						}	
					}
					else
					{
						left=0;
						leftmon=left;
						right=0;
						rightmon=right;
					}

				}
				p[j].lad=ladder;
				p[j].idx=end;		
			}
		}

		int k, min=2000;
		for(k=0;k<100;k++)
		{
			if(p[k].lad==0)
				continue;
			else
			{
				if(p[k].lad<=min)
				{
					min=p[k].lad;
					index=p[k].idx;
				}
			}
		}

		printf("#%d %d\n",test_case+1,index);

		/*r(i=0;i<100;i++)
		{
			printf(" %d %d \t",p[i].lad,p[i].idx);
			if((i+1)%10==0)
				printf("\n");
		}

		printf("\n\n\n"); */
	}

	return 0;
}

