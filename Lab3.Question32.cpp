#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n,firstdigit,lastdigit,digits;
	
	cin>>n;
	
	lastdigit = n % 10 ;
	
	digits = (int) log10(n) ;
	
	firstdigit = (int)(n / pow(10,digits));
	
	cout << "The First digit is "<<firstdigit<<endl;
	
	cout << "The Last digit is " <<lastdigit<<endl;
	
	return 0;
}
