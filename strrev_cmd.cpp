/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string.h>
using namespace std;

int main(int argc,char *argv[])
{
    int i,j,size=0;
    char s[100];
    for(i=1;i<argc;i++)
    {
        size+=strlen(argv[i]);
    }
   cout<<size<<"\n";
for(i=1;i<argc;i++)
    {
        strcat(s,argv[i]);
    }
    //cout<<s<<"\n";
    i=0;
    j=strlen(s)-1;
    while(i<j)
    {
        char t;
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    cout<<s;
    return 0;
}
