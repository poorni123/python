#include <iostream>
using namespace std;

int main() {
	int n,a[100],i,j,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
			for(j=i;j<n;j++)
			{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
			}
	}
	int f=0,l=n-1;
	while(f<l)
	{
		cout<<a[l]<<" "<<a[f]<<" ";
		f++;
		l--;
		if(f==l)
		cout<<a[l];
	}
	return 0;
}
