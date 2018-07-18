#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string s[100],s1,s2;
	int count=0,n;
	int c[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int j=0;j<n;j++)
	{
		count=0;
	for(int i=0;i<s[j].length();i++)
	{
	if(s[j][i]=='a'||s[j][i]=='e'||s[j][i]=='i'||s[j][i]=='o'||s[j][i]=='u')
	{
		count++;
	}
	}
	c[j]=count;
	}
	for(int i=0;i<n;i++)
	{
		int t;
		string temp;
	for(int j=i;j<n;j++)
	{
	if(c[i]<c[j])
	{
	t=c[i];
	c[i]=c[j];
	c[j]=t;
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	}
	}
	for(int i=0;i<n;i++)
	cout<<s[i]<<"\n";
	return 0;
}
