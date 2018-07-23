#include <iostream>
using namespace std;

int main() {
	int n,k,i,j;
	int a[100][100],c=0;
	cin>>n;
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
	{
		cin>>a[i][j];
	}
		
	}
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
	{
		
		if(a[i][j]==1)
		{
	c++;
		}

}}

cout<<c;
	return 0;
}
