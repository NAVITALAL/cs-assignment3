#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,sum=0,n;
	
	cin>>n;
	
	for(x=2;x<=n;x+=2)
	{
		sum=sum+x;
	}
	
	cout <<" "<<sum;
	
	
	return 0;	
}
