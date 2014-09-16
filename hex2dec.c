//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
////int hextodec(int n)
////{
////	int rem,dec=0;
////	int mulFac=0;
////	while(n)
////	{
////		rem=n%16;
////		dec+=rem*pow(16,mulFac);
////		n/=16;
////		mulFac++;
////	}
////}
//int power(int x,int y)
//{
//	int ret=1;
//	for(int i=0;i<y;i++)
//	{
//		ret*=x;
//	}
//	return ret;
//}
//
//
//
//int hextodec(char * hex)
//{
//    int i, length, sum=0;
//    for(length=0; hex[length]!='\0'; ++length);
//    for(i=0; hex[i]!='\0'; ++i, --length)
//    {
//        if(hex[i]>='0' && hex[i]<='9')
//            sum+=(hex[i]-'0')*power(16,length-1);
//        if(hex[i]>='A' && hex[i]<='F')
//            sum+=(hex[i]-55)*power(16,length-1);
//        if(hex[i]>='a' && hex[i]<='f')
//            sum+=(hex[i]-87)*power(16,length-1);
//    }
//    return sum;
//
//}
//
//int main()
//{
//	int n;
//	char *p=NULL;
//	char *s="1f";
//	int a=strtol(s,&p,16);
//	char *pt=NULL;
//	pt=s;
//	/*while( pt != (p))
//	{
//
//	printf("the hex num div by 16 is :%d \n",a);
//	pt=p;
//	a=strtol(pt,&p,16);
//
//	}*/
//	printf("the hex value is : %x",hextodec(s));
//	return 0;
//}
//
//
//
////
////#include <stdio.h>      /* printf */
////#include <stdlib.h>     /* strtol */
////
////int main ()
////{
////  char szNumbers[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
////  char * pEnd;
////  long int li1, li2, li3, li4;
////  li1 = strtol (szNumbers,&pEnd,10);
////  li2 = strtol (pEnd,&pEnd,16);
////  li3 = strtol (pEnd,&pEnd,2);
////  li4 = strtol (pEnd,NULL,0);
////  printf ("The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);
////  return 0;
////}
