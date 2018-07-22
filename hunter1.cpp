#include <iostream>
using namespace std;

int main() {
	int a[100],n,i,j,c=0,t,index=0,e=0,b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		
			b[e]=a[i];
			e++;
		}
	}}
		for(i=0;i<e;i++)
	{
		for(j=0;j<e;j++)
		{
		if(b[j]>b[i] )
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
			
		}
			
		}
	}
		for(i=0;i<e;i++)
	{
		if(b[i]!=b[i+1])
			cout<<b[i]<<" ";
	}
	
	return 0;
}
