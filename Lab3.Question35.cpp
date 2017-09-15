#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int x,n,sum=0;
	
	cout<<"Enter any num ";
	cin>>n;
	
	while(n>0)
	{
	x=n%10;
	n=n/10;
	sum=sum+x;
	}
	cout<<"\nSum of digits: "<<sum;

	return 0;
}
