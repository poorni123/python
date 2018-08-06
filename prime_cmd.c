/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
   int n1,n2,i,j;
   n1=atoi(argv[1]);
   n2=atoi(argv[2]);
   for(i=n1;i<=n2;i++)
   {
      int prime=0;
      for(j=2;j<i;j++)
      {
          if(i%j==0)
          {
              prime=1;
              break;
          }
      }
   
   if(prime==0)
    printf("%d \n",i);
   }
}
