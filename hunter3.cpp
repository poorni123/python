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
		if(i==a[i])
		{
		flag=1;
		if(c<n-1)
		b[e++]=a[i];
		}
	}
	if(flag==0)
	{
		cout<<-1;
	}
	else
	{
	for(i=0;i<e;i++)
	{
	if(c<(e-1))
	{
		cout<<b[i]<<" ";
	}
	else
	cout<<b[i];
	}
	c++;
	}
	
	
	return 0;
}
