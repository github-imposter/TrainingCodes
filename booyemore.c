//#include<stdio.h>
//#include<stdlib.h>
//
//char *text= "asdfghaghjkl";
//char *pattern="dfghagh";
//int text_size=0;
//int pattern_size=0;
//char SkipTable[128]={-1};
//char SkipTable1[128]={-1};
//char shift[128]={0};
//int build_table()
//{
//	int ts,ps;
//	for(ts=0;text[ts]!='\0';ts++);
//	text_size=ts;
//	for(ps=0;pattern[ps]!='\0';ps++);
//	pattern_size=ps;
//	if(ps>ts)
//	{
//		printf("pattern length is greater than text length");
//		return 0;
//	}
//	for(int k=0;k<128;k++)
//	{
//		 SkipTable[k]=-1;
//	}
//	for(ps=0;pattern[ps]!='\0';ps++)
//	{
//		char c= pattern[ps];
//		SkipTable['c']= ps;
//	}
//	return 0;
//}
//
//int buil_good_Suffix()
//{
//	if(text_size < pattern_size)
//	{
//		printf("pattern length is greater than text length");
//		return 0;
//	}
//	for(int k=0;k<128;k++)
//	{
//		 SkipTable1[k]=-1;
//	}
//	for(int k=0;k<128;k++)
//	{
//		shift[k]=0;
//	}
//
//	int j=pattern_size ,i=pattern_size-1;
//	SkipTable1[i]=j;
//	while(i>0)
//	{
//
//		while(j<=pattern_size-1 && pattern[i-1]!=pattern[j-1])
//		{
//			if(shift[j]==0) 
//			{
//					shift[j]=j-i;
//					printf("shift array %d th value is set to : %d \n",j, (j-i));
//			}
//			j=SkipTable1[j];
//		}
//		i--,j--;
//		SkipTable1[i]=j;
//	}
//	return 1;
//}
//
//int findPattern()
//{
//	build_table();
//	buil_good_Suffix();
//	
//	int base=0;
//	while(base<text_size-pattern_size)
//	{
//		int j=pattern_size-1;	
//		while(j>=0 && pattern[j]==text[base+j]) j--;
//
//		if(j<0)
//		{
//			printf("pattern found at %d \n",base);
//			base+= (base+pattern_size < text_size )? pattern_size-SkipTable[text[base+pattern_size]] : 1; 
//		}
//		else
//		{
//			//char c=text[base+j];
//			if(shift[j+1])
//			{
//				base+= ( shift[j+1] > 1 ) ? shift[j+1] : 1;
//				printf("shift of %d is %d\n",j+1 ,shift[j+1]);
//			}
//			else
//			{
//			base+= ( (j-SkipTable[text[base+j]]) > 1 ) ? (j-SkipTable[text[base+j]]) : 1;
//			}
//		}
//
//	}
//	//printf("pattern not found \n");
//	return -1;
//}
//
//
//int main()
//{
//	findPattern();
//	return 0;
//}
