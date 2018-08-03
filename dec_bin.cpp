#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// youode goes here
	int n,binary,decimal=0,i=1,rem;
	cin>>n;
	binary=n;
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		decimal+=rem*i;
		i*=10;
	}
		
	cout<<decimal;
	
	return 0;
}
