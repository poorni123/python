#include <iostream>
using namespace std;

int main() {
	int i,j,m,n,a[100],sum=0,flag=0;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	if(i!=j)
	{
		if(a[i]+a[j]==m)
		flag=1;
		
	}
	}
	
}
if(flag==1)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}
	return 0;
}
