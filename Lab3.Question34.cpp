#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, swappedN;
	int firstDigit, lastDigit, digits;

	cin>>n;

	lastDigit  = n % 10;

	digits     = (int)log10(n); 

	firstDigit = (int)(n / pow(10, digits)); 

	swappedN  = lastDigit;
	swappedN *= (int) pow(10, digits);
	swappedN += n % ((int) pow(10, digits));
	swappedN -= lastDigit;
	swappedN += firstDigit;

	cout << "Original number is " << n <<endl;
	cout << "Number after swapping first and last digit is "<< swappedN << endl;
	
	return 0;
}
