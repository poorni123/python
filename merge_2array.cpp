#include <iostream>
using namespace std;
int array(int a[],int b[],int n1,int n2,int c[])
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
		c[k++]=b[j++];
	
	}
	while(i<n1)
	c[k++]=a[i++];
	while(j<n2)
	c[k++]=b[j++];
}

int main() {
	int a[100],b[100],i,j,n1=5,n2=4,c[n1+n2];
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	array(a,b,n1,n2,c);
	int n3=n1+n2;
	for(i=0;i<n3;i++)
	{
		cout<<c[i];
	}
	
	
}
