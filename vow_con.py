#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string s,s1,s2;
	cin>>s;
	for(int i=0;i<strlen(s);i++)
	{
	if(s[i]=="a"||s[i]=="e"||s[i]=="i"||s[i]=="o")
	{
		s1=s1+s[i];
	}
	else
	{
		s2=s2+s[i];
	}
	}
	cout<<s1+s2;
	
	return 0;
}
