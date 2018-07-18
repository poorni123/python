#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string s[100],s1,s2;
	int sum=0,n;
	int c[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
		for(int i=0;i<n;i++)
	{
	if(c[i]<0)
	{
		sum=sum+c[i];
	}
	}
	cout<<sum;
}
	
		
