#include<stdio.h>
#include<limits.h>
//int DFS(int **arr, int row );
#define M 4294967295
unsigned int m = ~0 ;
unsigned int a[6][6] = {{0,2,1,M,3,4} ,{2,0,1,M,M,M} ,{1,1,0,7,M,M} ,{M,M,7,0,4,2},{3,M,M,4,0,M},{4,M,M,2,M,0} } ;
int visited[6]= {0};
int main()
{

    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("%u\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("=======================================%u \n" ,m);
    unsigned int arr[6][6] = {m};

    for(i=0; i<6; i++)
    {
        for(j=0; j<5; j++)
        {
            arr[i][j]=m;
            printf("%u\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //DFS(dat ,1);
    int row=0 ;

    for(j=0; j<6; j++)
    {


        //int maxnum = 0;
        unsigned int maxm = m;
        int i;
        for(i=1; i<6; i++)
        {
            if(j==0)
            {
                arr[j][i]=a[row][i];
            }

            else
            {
                if((a[row][i]==M) || (row==i))
                {
                    arr[j][i]=arr[j-1][i] ;
                }
                else
                {
                    arr[j][i] = arr[j-1][i];

                    if( arr[j][i] > ( arr[j-1][row] + a[  row][i] ) )
                    {
                        arr[j][i]=arr[j-1][row]+a[row][i];
                    }
                }
            }





        }

        visited[row] = 1;
        int k;
        for(k=1; k<6; k++)
        {
            if(!visited[k])
            {
                if(maxm > arr[j][k])
                {
                    maxm=arr[j][k];
                    row=k;
                }

            }
        }



    }
    printf("\n");
    for(i=0; i<6; i++)
    {
        for(j=1; j<6; j++)
        {
            //arr[i][j]=m;
            printf("%u\t\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}







