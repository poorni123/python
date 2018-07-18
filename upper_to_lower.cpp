#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string s,s1,s2;
	int sum=0,n;
	int c[100];
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
	if(s[i]>='a' && s[i]<='z')
	{
		s[i]=toupper(s[i]);
	}
	else
	{
		s[i]=tolower(s[i]);
	}
	}
	cout<<s;

}
