#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int i,j,e=0;
	for(i=0;i<s.length();i=i+2)
	{
		for(j=0;j<s[i+1]-'0';j++)
		{
		cout<<s[i];	
		}
	}
	return 0;
	
}
