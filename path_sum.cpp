#include <iostream>
using namespace std;

int main() {
	int i,j,m,n,a[100][100],sum=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	i=0;j=0;
	sum+=a[i][j];
	while(i<m && j<n){
		//sum+=a[i][j];
		if(a[i+1][j]>a[i][j+1])
		{
			i++;
			sum+=a[i][j];
		}
		else
		{
			j++;
			sum+=a[i][j];
		}
		}
		cout<<sum;
	return 0;
}
