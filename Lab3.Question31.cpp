#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,a=0;
	
	cin>>i;
	
	while(i>0)
	{
		i=i/10;
		a++;
	}
	
	cout <<"number of digits in the given number"<<a<<endl;
	
	return 0;	
}
