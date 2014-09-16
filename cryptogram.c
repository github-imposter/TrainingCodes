//#include<stdlib.h>
//#include<stdio.h>
//
////########################################################################################################################################
//struct node {
//	int data;
//	struct node* next;
//}*head;
//
//int counts(struct node** root)
//{
//	if(*root==NULL)
//	{
//		return 0;
//	}
//	int count=0;
//	struct node* temp=*root;
//	while(temp)
//	{
//		count++;
//		temp=temp->next;
//	}
//	return count;
//}
//
//struct node* add_data(int value,struct node** root)
//{
//	struct node *temp;
//	temp=(struct node *)malloc(sizeof(struct node));
//	temp->data=value;
//	temp->next=NULL;
//	struct node* iter;
//
//	if (*root == NULL)
//	{
//		*root=temp;
//		(*root)->next=NULL;
//		return temp;
//	}
//	else
//	{
//		iter=*root;
//		while(iter->next)
//		{
//			iter=(iter)->next;
//		}
//
//		iter->next=temp;
//		return temp;
//
//	}
//
//
//
//}
//
//int print_data(struct node** root)
//{
//	if(*root==NULL)
//	{
//		printf("no elements in the linklist\n");
//		return NULL;
//	}
//	struct node* temp;
//	temp=*root;
//	while(temp)
//	{
//		printf(" %d \t",temp->data );
//		temp=temp->next;
//	}
//
//}
//
//
//int print_data_till(struct node** root,int num)
//{
//	int count=1;
//	if(*root==NULL)
//	{
//		printf("no elements in the linklist\n");
//		return NULL;
//	}
//	struct node* temp;
//	temp=*root;
//	while(temp && count<=num)
//	{
//		count++;
//		printf("%d ",temp->data);
//		temp=temp->next;
//	}
//	return NULL;
//}
//
//struct node* find(int value,struct node** root)
//{
//	struct node* index;
//	struct node* temp;
//	if(*root==NULL)
//	{
//		printf("no elements to find index");
//		return NULL; 
//	}
//	temp=*root;
//	while(temp->data!=value && temp->next!= NULL  )
//	{
//		temp=temp->next;
//	}
//	if(temp->data==value)
//	{
//		//printf("element found at addr : %u and value is %d \n",temp,temp->data);
//		return temp;
//	}
//	if(temp->next==NULL)
//	{
//		printf("the linklist doesnt contain value :%d \n",value);
//		return NULL;
//	}
//
//
//}
//
//struct node* findIndexAddr(int index,struct node** root)
//{
//	int count=0;
//	struct node* temp;
//	struct node* prev;
//	if(*root==NULL)
//	{
//		printf("no elements to find index");
//		return NULL; 
//	}
//
//	temp=*root;
//	prev=temp;
//	while( (index > count) && temp->next!=NULL  )
//	{
//		count++;
//		prev=temp;
//		temp=temp->next;
//	}
//	if(count==0)
//	{
//		return *root;
//	}
//	if(index==count)
//	{
//		//printf("element found at index %d : %u and value is %d \n",index,temp,temp->data);
//		return prev;
//	}
//	if(temp->next==NULL)
//	{
//
//		printf("given input is greater than linklist size \n");
//		return NULL;
//	}
//
//
//}
//
//
//void del(struct node** root)
//{
//
//	struct node* current = *root;
//	struct node* next;
//
//	while (current != NULL) 
//	{
//		next = current->next;
//		free(current);
//		current = next;
//	}
//
//	/* deref head_ref to affect the real head back
//	in the caller. */
//	*root = NULL;
//
//
//}
//
//
//void delNum(struct node** root,int numx ,int numy )
//{
//	int count=0;
//	struct node* prev = findIndexAddr(numx,root);
//	struct node* afterdel=findIndexAddr(numy+numx,root);
//	struct node* current;
//	struct node* temp=*root;
//	if(numx==0)
//	{
//		*root=afterdel->next;
//		current=temp;
//	}	
//	else
//	{
//		current	=prev->next;
//		prev->next=afterdel->next;
//	}
//	struct node* next;
//
//
//	while (count<numy && current != NULL) 
//	{
//		count++;
//		next = current->next;
//		current->next=NULL;
//		//printf("\n elements deleted are %d",current->data);
//		free(current);
//		current = next;
//	}
//
//
//
//	/* deref head_ref to affect the real head back
//	in the caller. */
//	//*root = NULL;
//
//
//}
//
//
////########################################################################################################################################
//
//
//
//int main()
//{
//	int i,j,k,element,commands;
//	int n=0;
//	char shit;
//
//	for(i=0;i<2;i++)
//	{
//		struct node* start=NULL;
//		struct node* addr=NULL;
//		struct node* addr2=NULL;
//		struct node* end=NULL;
//		struct node* tempList=NULL;
//		scanf("%d\n",&n);
//		for(j=0;j<n;j++)
//		{
//			if(j==0)
//			{
//				scanf("%d ",&element);
//				end=add_data(element,&start);
//			}
//			else
//			{
//				scanf("%d ",&element);
//				end=add_data(element,&end);
//			}
//
//		}
//		scanf("\n");
//
//		scanf("%d\n",&commands);
//		int x,y;
//		for(k=0;k<commands;k++)
//		{
//			scanf("%c",&shit);
//			
//			tempList=NULL;
//			end=NULL;
//
//			if(shit=='I')
//			{
//				scanf("%d %d ",&x,&y);
//				//printf("shit value is :%c and x and y valueas are %d %d",shit,x,y);
//				for(j=0;j<y;j++)
//				{
//					if(j==0)
//					{
//						scanf("%d ",&element);
//						end=add_data(element,&tempList);
//					}
//					else
//					{
//						scanf("%d ",&element);
//						end=add_data(element,&end);
//					}
//
//					//print_data(&tempList);
//				}
//				if(x==0)
//				{
//					end->next=start;
//					start=tempList;
//				}
//
//
//				//addr2=findindexaddr(x+1,&start);
//				//addr->next=&tempList;
//				//end->next=addr2;
//
//				else
//				{
//					addr=findIndexAddr(x,&start);
//					end->next=addr->next;
//					addr->next=tempList;
//				}
//
//			}
//
//			if(shit=='D')
//			{
//				scanf("%d %d ",&x,&y);
//				//printf("the count before delete is :%d \n",counts(&start));
//				delNum(&start,x,y);
//			}
//
//			if(shit=='A')
//			{
//				scanf("%d",&x);
//				y=counts(&start);
//				for(j=0;j<x;j++)
//				{
//					if(j==0)
//					{
//						scanf("%d ",&element);
//						end=add_data(element,&tempList);
//					}
//					else
//					{
//						scanf("%d ",&element);
//						end=add_data(element,&end);
//					}
//
//					//print_data(&tempList);
//				}
//
//				addr=findIndexAddr(y-1,&start);
//				addr=addr->next;
//				addr->next=tempList;
//
//
//			}
//
//
//		}
//		printf("#%d ",i+1);
//		print_data_till(&start,10);
//		printf("\n");
//
//
//
//
//	}
//
//
//	return 0;
//}
