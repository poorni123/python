#include<iostream>
#include<math.h>
using namespace std;
int main () 
{
    string s;
    int i,j,sum=0;
    cin>>s;
    int c=s.length();
    for(i=0;i<c;i++)
    {
    	int p=(s[i]-'0');
	sum+=pow(p,c);
    }
    cout<<sum;
}
