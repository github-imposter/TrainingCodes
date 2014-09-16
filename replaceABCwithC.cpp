#include <stdio.h>
#include <stdlib.h>
void recognize(char * );
int main() {
    char* input1="zabcbababcbabbac\0";
    printf("heheh ---%s \n",input1);
    recognize(input1);
    return 0;
}

void recognize(char * input)
{
     printf("in recognise \n");
     if(!input)
     {
        printf("No proper input specified");
     	exit(1);
     }
    else
    {
     printf("in recognise else part\n");
     int count=0;

     while(*input)
     {
         printf("in recognise input value is %c\n",*input);
      	  count++;
      	  printf("in recognise count loop no %d\n",count);
      	  input++;
     }
     input=input-count;
     printf("the input start with --- %c \n",*input);
     char *p;
     printf("hi man hru");
     p=malloc(count*sizeof(char));
     printf("hi man hru");
     if(!p)
     {
         printf("memory allocation failed");
         exit(1);
     }
     while(*input)
     {
      	if((*input=='a')&&(*(input+1)=='b')&&(*(input+2)='c'))
        {
            printf("if abc in recognise \n");
    		  *p='c';
               input+=3;
               p++;
        }
         else
         {
             printf("in else of abc recognise \n");
             printf("the input start with --- %c \n",*input);
          	*p=*input;
          	 printf("the input start with --- %c \n",*p);
             p++;
             input++;
         }
     }
     *p='\0';
      p=p-count;

      printf("the output string is %s",p);

    }
}
