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
		for(j=0;j<n;j++)
		{
		if(a[j]<a[i] )
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			
		}
			
		}
	}
		for(i=0;i<n;i++)
	{
	
			cout<<a[i];
	}
	
	return 0;
}
