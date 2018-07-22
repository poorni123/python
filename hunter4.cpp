#include <iostream>
using namespace std;

int main() {
	int a[100],n,i,j,c=0,t,flag=0,e=0,b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
	{
		if(i!=j){
		if(a[i]==a[j])
		{
	c++;
		}
	}}
	if(c==0)
	{
		cout<<a[i];
	}
	}
	
	
	
	
	return 0;
}
