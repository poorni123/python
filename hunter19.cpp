#include <iostream>
using namespace std;

int main() {
	int n,k,i,j;
	int a[100][100],flag=0;
	cin>>n,k;
		for(i=0;i<n;i++)
	{
			for(j=0;j<k;j++)
	{
		cin>>a[i][j];
	}
		
	}
		for(i=0;i<n;i++)
	{
			for(j=0;j<k;j++)
	{
		
		if(a[i][j]==a[i+1][j])
		{
	cout<<a[i][j];
		}

}}


	return 0;
}
