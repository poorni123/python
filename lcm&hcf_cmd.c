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
   int n1,n2,i,j,hcf,t,lcm;
   n1=atoi(argv[1]);
   n2=atoi(argv[2]);
   hcf=n1;
   t=n2;
   while(hcf!=t)
   {
       if(hcf>t)
       hcf-=t;
       else
       t-=hcf;
   }
   lcm=(n1*n2)/hcf;
   printf("%d",lcm);
}
