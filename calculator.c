//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//
//struct Node
//{
//	char Data;
//	struct Node *next;
//}*top ;
//
//char popStack()
//{
//	char popdata;
//	struct Node *temp, *var=top;
//	if(top==NULL)
//	{
//		printf("\nStack Empty");
//		return NULL;
//	}
//	else
//	{
//		popdata=top->Data;
//		top = top->next;
//		free(var);
//		return popdata;
//	}
//
//}
//
//void push(char value)
//{
//	struct Node *temp;
//	temp=(struct Node *)malloc(sizeof(struct Node));
//	temp->Data=value;
//	if (top == NULL)
//	{
//		top=temp;
//		top->next=NULL;
//	}
//	else
//	{
//		temp->next=top;
//		top=temp;
//	}
//}
//
//int isStackEmpty()
//{
//	if(top==NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//
//void display()
//{
//	struct Node *var=top;
//	if(var!=NULL)
//	{ 
//		printf("\nElements are as:\n");
//		while(var!=NULL)
//		{
//			printf("\t%c\n",var->Data);
//			var=var->next;
//		} 
//		printf("\n");
//	}
//	else
//		printf("\nStack is Empty");
//}
//
//
////###################################################################################################################################################################
//
//struct Node1
//{
//	int Data;
//	struct Node1 *next;
//}*top1 ;
//
//int popStack1()
//{
//	int popdata;
//	struct Node1 *temp, *var=top1;
//	if(top1==NULL)
//	{
//		printf("\nStack Empty");
//		return NULL;
//	}
//	else
//	{
//		popdata=top1->Data;
//		top1 = top1->next;
//		free(var);
//		return popdata;
//	}
//
//}
//
//void push1(int value)
//{
//	struct Node1 *temp;
//	temp=(struct Node1 *)malloc(sizeof(struct Node));
//	temp->Data=value;
//	if (top1 == NULL)
//	{
//		top1=temp;
//		top1->next=NULL;
//	}
//	else
//	{
//		temp->next = top1;
//		top1=temp;
//	}
//}
//
//int isStackEmpty1()
//{
//	if(top1==NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//
//void display1()
//{
//	struct Node1 *var=top1;
//	if(var!=NULL)
//	{ 
//		printf("\nElements are as:\n");
//		while(var!=NULL)
//		{
//			printf("\t%d\n",var->Data);
//			var=var->next;
//		} 
//		printf("\n");
//	}
//	else
//		printf("\nStack is Empty");
//}
//
//
//
//
//
///*#################################################################################################################################################################*/
//// SAMPLE C CODE FOR PROBLEMS 1, 2 and 3
//
//// define your logic functions here as necessary
//
//
//int getPriority(char c)
//{
//	switch(c)
//	{
//	case '(':
//		return 3;
//	case '+':
//	case '-':
//		return 1;
//	case '*':
//	case '/':
//		return 2;
//
//	}
//}
//
//
//int getStackprio(int c)
//{
//	switch(c)
//	{
//	case '(':
//		return 0;
//	case '+':
//	case '-':
//		return 1;
//	case '*':
//	case '/':
//		return 2;
//
//	}
//}
//
//
//int computeResult(char infix_expr[],int length){
//	char output[1000];
//	int i,j=0,k;
//	for(i=0;i<length;i++)
//	{
//		output[i]='a';
//	}
//
//
//	struct sNode *stack = NULL;
//
//	for(i=0;i<length;i++)
//	{
//		char c=infix_expr[i];
//		switch(c)
//		{
//		case '(':
//		case '+':
//		case '-':
//		case '*':
//		case '/':
//		case '%':
//			if(top==NULL)
//				push(c);
//			else if(getPriority(c)>getStackprio(top->Data))
//				push(c);
//			else if(getPriority(c)<=getStackprio(top->Data))
//			{
//				while(1)
//				{
//					if(top!=NULL && getPriority(c)<=getStackprio(top->Data))
//					{
//
//						output[j]=popStack();			
//						j++;
//
//					}
//					else
//					{
//						push(c);
//						break;
//					}
//				}
//			}
//			break;
//
//		case ')':
//			while(top!=NULL)
//			{
//
//				char cc=popStack();
//
//				if(cc=='(')
//				{
//					//popStack();
//					break;
//				}
//				else
//				{
//					output[j]=cc;
//					j++;
//				}
//			}
//			break;
//		default :
//			output[j]=c;
//			j++;
//		}
//	}
//
//
//
//
//
//	while(top!=NULL)
//	{
//		output[j]=popStack();
//		j++;
//	}
//
//	/*	for(i=0;i<j;i++)
//	{
//	printf(" %c",output[i]);
//	}
//	display(); */
//
//	for(i=0;i<j;i++)
//	{
//		char d=output[i];
//		int a,b,c;
//		switch(d)
//		{
//		case '+':
//			a=popStack1();
//			b=popStack1();
//			c=b+a;
//			push1(c);
//			break;
//		case '-':
//			a=popStack1();
//			b=popStack1();
//			c=b-a;
//			push1(c);
//			break;
//		case '*':
//			a=popStack1();
//			b=popStack1();
//			c=b*a;
//			push1(c);
//			break;
//		case '/':
//			a=popStack1();
//			b=popStack1();
//			c=b/a;
//			push1(c);
//			break;
//		case '%':
//			a=popStack1();
//			b=popStack1();
//			c=b%a;
//			push1(c);
//			break;
//
//
//		default:
//			push1(d-'0');
//
//		}
//	}
//	return popStack1(); 
//
//	//return 1;
//}
//
//
//
//int main()
//{
//	int tcLen;
//	int i, j;
//	int answer,answer1;
//	char infix_expr[1000];
//
//	for (i=0; i<10; i++){
//
//		answer = 0;
//		answer1=0;
//
//		scanf("%d\n", &tcLen);
//
//		for (j=0; j<tcLen; j++){
//			scanf("%c", &infix_expr[j]);
//		}
//
//		//calculate and print answer here
//		answer = computeResult(infix_expr,tcLen);
//		//answer1=comp(infix_expr,tcLen);
//		printf("#%d %d\n",i+1, answer);
//	}	
//
//	return 0;
//}
//
//
//

