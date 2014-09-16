#include<iostream>
#include<math.h>
using namespace std;

int quotient=0;
int quo(int ,int);
int normal_Division(int,int);
int num_of_digits(int);

int main()
{
    int n=9000;
    int d=42;
    int quotient=quo(n,d);
    //cout<<"the quotient is  %d \t"<<quotient;
    return 0;
}

int quo(int n,int d)
{
    int sDivisor=num_of_digits(d);
    while(d<n)
    {
        int sDividend=num_of_digits(n);

        if(sDividend>sDivisor)
        {
            int diff=sDividend-sDivisor;
            int multiple=pow(10,diff);
            if((d*multiple)<=n)
            {
                n=n-(d*multiple);
                quotient=quotient+multiple;
            }

        }
        else
        {
                normal_Division(n,d);
                break;
        }


    }
    cout<<"the result is \t"<<quotient<<endl;
    return 0;

}

int num_of_digits(int n)
{
    unsigned int a=0xf0000000;
    int i=8;// reason for i=8 is a intezer has four bytes = 8 nibbles = 8 digits it changes fron word size of architecture
    while(i>0)
    {
        if(n & a)
        {
            return i;
        }
        else
        {
            a=a>>4;
            i--;
        }
    }

}

int normal_Division(int dividend ,int divisor)
{
    int count=0;
    while(dividend>=divisor)
    {
        dividend=dividend-divisor;
        count++;
    }
    quotient=quotient+count;
    return 0;
}
