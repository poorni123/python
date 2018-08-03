#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// youode goes here
	int n,binary,decimal=0,i=0,rem;
	cin>>n;
	binary=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		decimal+=rem*pow(2,i);
		++i;
	}
		
	cout<<decimal;
	
	return 0;
}
