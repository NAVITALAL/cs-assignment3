#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n,firstdigit,lastdigit,sum=0;
	
	cin>>n;
	
	lastdigit = n % 10 ;
	
	firstdigit = n;
	
	while (n>=10)
	{
	n=n/10;
	}
	firstdigit=n;
	
	sum = firstdigit + lastdigit;
	
	cout << "The Sum of the first and last digit is "<<sum<<endl;
	
	
	return 0;
}
