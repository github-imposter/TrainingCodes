//#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
//
//int N;
//char Operator[1001];
//int Firstchild[1001];
//int Secondchild[1001];
//int Number[1001];
//int Answer;
//
//
//int arrayinorder(int i,int N)
//{
//	if(i>N)
//		return 0;
//
//	int p,q;
//	char c;
//
//	if(Operator[i]==0)
//	{
//		return Number[i];
//	}
//	
//	p=arrayinorder(Firstchild[i],N);
//	//printf("%c",Alpha[i]);
//
//	q=arrayinorder(Secondchild[i],N);
//
//	switch(Operator[i])
//	{
//		case '+' :
//			return p+q;
//			
//		case '-' :
//			return p-q;
//			
//		case '*':
//			return p*q;
//			
//		case '/':
//			return p/q;
//
//		case '%':
//			return p%q;
//
//
//	}
//	
//
//	
//}
//
//
//
//int compute(int N)
//{
//	return arrayinorder(1,N);
//	
//
//}
//
//
//int main(void)
//{
//	int test_case;
//	/*
//	   freopen function below opens input.txt file in read only mode, and afterward,
//	   the program will read from input.txt file instead of standard(keyboard) input.
//	   To test your program, you may save input data in input.txt file,
//	   and use freopen function to read from the file when using scanf function.
//	   You may remove the comment symbols(//) in the below statement and use it.
//	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
//	 */
//	// freopen("input.txt", "r", stdin);
//
//	/*
//	   If you remove the statement below, your program's output may not be rocorded
//	   when your program is terminated after the time limit.
//	   For safety, please use setbuf(stdout, NULL); statement.
//	 */
//	setbuf(stdout, NULL);
//
//	/*
//		Your program should handle 10 test cases given.
//	*/
//	for(test_case = 1; test_case <= 10; ++test_case)
//	{
//		int i, j;
//		int addr;
//		char str[1000];
//		memset(Firstchild, 0, sizeof(int) * 1001);
//		memset(Secondchild, 0, sizeof(int) * 1001);
//		memset(Number, 0, sizeof(int) * 1001);
//		memset(Operator, 0, sizeof(char) * 1001);
//		/*
//			Read each test case from standard input.
//			The number of node is N.
//			
//			All information for i-th node is stored in i-th index of each arrays as follows 
//			 If i-th node consists of an operator, that operator is stored in Operator[i] and the children nodes are stored in Firstchild[i] and Secondchild[i], respectively. 
//			 If i-th node consists of a number, a given positive number is stored in Number[i].
//		 */
//		scanf("%d", &N);
//		for(i = 0; i < N; i++)
//		{
//			scanf("%d", &addr);
//			scanf("%s", str);
//			if( strcmp(str,"+") == 0 || strcmp(str,"-")== 0  || strcmp(str,"/") == 0 || strcmp(str,"*")== 0  )
//			{
//				Operator[addr]=str[0];	
//				scanf("%d %d",&Firstchild[addr],&Secondchild[addr]);
//			}
//			else
//			{
//				Number[addr]=atoi(str);
//			}
//		}
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		/*
//		   Implement your algorithm here.
//		   The answer to the case will be stored in variable Answer.
//		 */
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		Answer = 0;
//
////		/*for(int l=0;l<11;l++)
////		{
////			printf(" %c \t",Operator[l]); 
////		}
////		printf("\n");
////
////		for(int l=0;l<11;l++)
////		{
////			printf(" %d \t",Firstchild[l]); 
////		}
////		printf("\n");
////
////		for(int l=0;l<11;l++)
////		{
////			printf(" %d \t",Secondchild[l]); 
////		}
////		printf("\n");
////
////		for(int l=0;l<11;l++)
////		{
////			printf(" %d \t",Number[l]); 
////		}
////		printf("\n");
////*/
//		// Print the answer to standard output(screen).
//		printf("#%d ", test_case);
//		Answer=compute(N);
//		printf("%d\n", Answer);
//	}
//
//	return 0;//Your program should return 0 on normal termination.
//}

